/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:38 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 13:58:45 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	length;

	length = -1;
	while (str[++length])
		if ((str[length] >= 'a') && (str[length] <= 'z'))
			str[length] -= ' ';
	return (str);
}
