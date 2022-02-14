/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:23:28 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/09 22:09:54 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
	printf("%d", ft_str_is_numeric("cagado"));
	printf("%d", ft_str_is_numeric("CAGADO"));
	printf("%d", ft_str_is_numeric("Cagado"));
	printf("%d", ft_str_is_numeric("CaGaDo"));
	printf("%d", ft_str_is_numeric("1"));
	printf("%d", ft_str_is_numeric("1a1"));
	printf("%d", ft_str_is_numeric("999"));
	printf("%d", ft_str_is_numeric("C@GADO"));
	printf("%d", ft_str_is_numeric("CAGAD0"));
}
