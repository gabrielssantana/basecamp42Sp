/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:23:28 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/14 21:42:57 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	printf("vazio %s\n", ft_strupcase(""));
	printf("%s\n", ft_strupcase("cagado"));
	printf("%s\n", ft_strupcase("CAGADO"));
	printf("%s\n", ft_strupcase("CaGaDo"));
}
