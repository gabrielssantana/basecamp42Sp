/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:46:49 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 16:09:36 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	length;
	int	is_numeric;

	length = -1;
	is_numeric = 1;
	while (str[++length] && is_numeric)
	{
		if ((str[length] >= '0') && (str[length] <= '9'))
			is_numeric = 1;
		else
			is_numeric = 0;
	}
	return (is_numeric);
}
