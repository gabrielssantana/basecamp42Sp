/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:22:45 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:08:12 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	length;

	length = -1;
	while (str[++length])
		if ((str[length] >= 'A') && (str[length] <= 'Z'))
			str[length] += ' ';
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	length;
	int	word_start;

	length = -1;
	word_start = 1;
	ft_strlowcase(str);
	while (str[++length])
	{
		if (str[length] >= 'a' && str[length] <= 'z')
		{
			if (word_start == 1)
				str[length] -= ' ';
			word_start = 0;
		}
		else if (str[length] >= '0' && str[length] <= '9')
			word_start = 0;
		else
			word_start = 1;
	}
	return (str);
}
