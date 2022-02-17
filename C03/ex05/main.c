/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:42:09 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/17 18:07:17 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	int		c;
	int		d;
	char	*e;
	char	*f;

	e = "World";
	f = "World";
	c = ft_strlcat(e, "Hello ", 0);
	d = strlcat(f, "Hello ", 0);
	printf("%s ", e);
	printf("%d", c);
	printf("\n%s ", f);
	printf("%d", d);
}
