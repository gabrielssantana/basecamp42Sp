/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:23:28 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 13:48:28 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_lowercase(""));
	printf("%d", ft_str_is_lowercase("cagado"));
	printf("%d", ft_str_is_lowercase("CAGADO"));
	printf("%d", ft_str_is_lowercase("Cagado"));
	printf("%d", ft_str_is_lowercase("CaGaDo"));
	printf("%d", ft_str_is_lowercase("1"));
	printf("%d", ft_str_is_lowercase("1a1"));
	printf("%d", ft_str_is_lowercase("999"));
	printf("%d", ft_str_is_lowercase("C@GADO"));
	printf("%d", ft_str_is_lowercase("CAGAD0"));
}
