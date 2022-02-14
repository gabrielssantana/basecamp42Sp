/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:55 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 16:09:51 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	length;
	int	is_lower;

	length = -1;
	is_lower = 1;
	while (str[++length] && is_lower)
	{
		if ((str[length] >= 'a') && (str[length] <= 'z'))
			is_lower = 1;
		else
			is_lower = 0;
	}
	return (is_lower);
}
