/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:47:19 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:33:41 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[9];
	char	copia[9];
	char	copia2[9];

	strcpy(src, "bundinha");
	ft_strncpy(copia, src, 8);
	strncpy(copia2, src, 8);
	puts(copia);
	puts(copia2);
}
