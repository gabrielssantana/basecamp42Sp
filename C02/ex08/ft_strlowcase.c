/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:38 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:14:15 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	length;

	length = -1;
	while (str[++length])
		if ((str[length] >= 'A') && (str[length] <= 'Z'))
			str[length] += ' ';
	return (str);
}
