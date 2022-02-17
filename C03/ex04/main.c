/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:34:05 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/16 22:43:08 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	src[255];
	char	find[255];
	char	*ptr;

	strcpy(src, "bla teste bla");
	strcpy(find, "teste");
	ptr = ft_strstr(src, find);
	printf("%p\n", ptr);
	printf("%s", &*ptr);
}
