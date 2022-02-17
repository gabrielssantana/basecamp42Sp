/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:51:27 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/16 17:51:55 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d", strncmp("teste", "tEs", 3));
	printf(" my %d\n", ft_strncmp("teste", "tEs", 3));
	printf("%d", strncmp("tes", "teste", 3));
	printf(" my %d\n", ft_strncmp("tes", "teste", 3));
	printf("%d", strncmp("teste", "teste", 3));
	printf(" my %d\n", ft_strncmp("teste", "testa", 3));
	printf("%d", strncmp("", "", 3));
	printf(" my %d\n", ft_strncmp("", "", 3));
	printf("%d", strncmp("teste", "", 3));
	printf(" my %d\n", ft_strncmp("teste", "", 3));
	printf("%d", strncmp("", "teste", 3));
	printf(" my %d\n", ft_strncmp("", "teste", 3));
}
