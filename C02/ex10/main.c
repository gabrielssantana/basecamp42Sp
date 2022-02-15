/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:21:48 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:13:06 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src;
	char	copia[9];
	char	copia2[3];

	src = "bundinha";
	printf("%u\n", ft_strlcpy(copia, src, 5));
	ft_strlcpy(copia2, src, 2);
	printf("%s\n", copia);
	printf("%s\n", copia2);
}
