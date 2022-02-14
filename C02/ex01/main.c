/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:47:19 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/14 21:29:16 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[15] = "bundinha";
	char	copia[9];
	char	copia2[3];

	ft_strncpy(copia, src, 5);
	ft_strncpy(copia2, src, 2);
	puts(copia);
	puts(copia2);
}
