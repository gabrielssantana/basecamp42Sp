/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:39:59 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/16 16:10:47 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	copia[13];
	char	copia2[13];

	puts(ft_strcpy(copia, "stringenorme"));
	puts(copia);
	strcpy(copia2, "stringenorme");
	puts(copia2);
}
