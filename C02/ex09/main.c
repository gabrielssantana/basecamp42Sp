/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:31:58 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 18:47:42 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	src[57];

	strcpy(src, "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um");
	ft_strcapitalize(src);
	printf("%s", src);
}
