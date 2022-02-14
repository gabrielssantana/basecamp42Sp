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

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("cagado"));
	printf("%d", ft_str_is_uppercase("CAGADO"));
	printf("%d", ft_str_is_uppercase("Cagado"));
	printf("%d", ft_str_is_uppercase("CaGaDo"));
	printf("%d", ft_str_is_uppercase("1"));
	printf("%d", ft_str_is_uppercase("1a1"));
	printf("%d", ft_str_is_uppercase("999"));
	printf("%d", ft_str_is_uppercase("C@GADO"));
	printf("%d", ft_str_is_uppercase("CAGAD0"));
}
