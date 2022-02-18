/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:01:06 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 17:46:46 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d", ft_atoi_base("---+--+1234ab567", "0123456789"));
	printf("\n%d", ft_atoi_base("2147483647", "0123456789"));
	printf("\n%d", ft_atoi_base("-2147483648", "0123456789"));
	printf("\n%d", ft_atoi_base("2147483647", "0123456789ABCDEF"));
	printf("\n%d", ft_atoi_base("-2147483648", "0123456789ABCDEF"));
	printf("\n%d", ft_atoi_base("pon", "poneyvif"));
	printf("\n%d", ft_atoi_base("ye", "poneyvif"));
}
