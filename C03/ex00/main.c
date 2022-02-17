/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:51:27 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/17 17:36:28 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*c;
	char	*d;

	c = "Hello";
	d = "Hello";
	printf("%s\n", c);
	printf("%d\n", ft_strcmp(c, "Hel"));
	printf("%s\n", d);
	printf("%d\n", strcmp(d, "Hel"));
}
