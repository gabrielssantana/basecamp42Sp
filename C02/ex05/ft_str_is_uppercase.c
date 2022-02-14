/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:48 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 16:10:08 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	length;
	int	is_upper;

	length = -1;
	is_upper = 1;
	while (str[++length] && is_upper)
	{
		if ((str[length] >= 'A') && (str[length] <= 'Z'))
			is_upper = 1;
		else
			is_upper = 0;
	}
	return (is_upper);
}
