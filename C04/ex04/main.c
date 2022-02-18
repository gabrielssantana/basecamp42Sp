/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:30:49 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 16:52:14 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(0, "01");
	printf("\n");
	ft_putnbr_base(2147483647, "01");
	printf("\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
}
