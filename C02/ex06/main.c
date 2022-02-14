/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:23:28 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 13:30:21 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("cagado"));
	printf("%d", ft_str_is_printable("CAGADO"));
	printf("%d", ft_str_is_printable("Cagado"));
	printf("%d", ft_str_is_printable("CaGaDo"));
	printf("%d", ft_str_is_printable("1"));
	printf("%d", ft_str_is_printable("1a1"));
	printf("%d", ft_str_is_printable("999"));
	printf("%d", ft_str_is_printable("C@GADO"));
	printf("%d", ft_str_is_printable("CAGAD0"));
	printf("%d", ft_str_is_printable("ç"));
}
