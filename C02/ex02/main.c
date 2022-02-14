/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:23:28 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/09 21:50:33 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d", ft_str_is_alpha(""));
	printf("%d", ft_str_is_alpha("cagado"));
	printf("%d", ft_str_is_alpha("CAGADO"));
	printf("%d", ft_str_is_alpha("Cagado"));
	printf("%d", ft_str_is_alpha("CaGaDo"));
	printf("%d", ft_str_is_alpha("1"));
	printf("%d", ft_str_is_alpha("C@GADO"));
	printf("%d", ft_str_is_alpha("CAGAD0"));
}
