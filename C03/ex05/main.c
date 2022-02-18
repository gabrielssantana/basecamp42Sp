/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:42:09 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 20:50:48 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	int		c;
	int		d;
	char	e[13];
	char	f[13];

	strcpy(e, "Hello");
	strcpy(f, "Hello");
	c = ft_strlcat(e, " World ", 7);
	d = strlcat(f, " World ", 7);
	printf("%s", e);
	printf("%d", c);
	printf("\n%s", f);
	printf("%d", d);
}
