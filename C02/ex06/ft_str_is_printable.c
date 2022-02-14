/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:48 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 16:10:41 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	length;
	int	is_printable;

	length = -1;
	is_printable = 1;
	while (str[++length] && is_printable)
	{
		if ((str[length] >= ' ') && (str[length] <= '~'))
			is_printable = 1;
		else
			is_printable = 0;
	}
	return (is_printable);
}
