/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:30:01 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:09:09 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[num / 16], 1);
	write(1, &hexx[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	length;

	length = -1;
	while (str[++length])
	{
		if (str[length] >= 0 && str[length] <= 31)
		{
			write(1, "\\", 1);
			ft_hex(str[length]);
		}
		else
			write(1, &str[length], 1);
	}
}
