/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:34:05 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 20:49:07 by gasantos         ###   ########.fr       */
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
	char	*ptr1;

	strcpy(src, "tes bla");
	strcpy(find, "teste");
	ptr = ft_strstr(src, find);
	ptr1 = strstr(src, find);
	printf("%p\n", ptr);
	printf("%s\n", &*ptr);
	printf("%p\n", ptr1);
	printf("%s", &*ptr1);
}
