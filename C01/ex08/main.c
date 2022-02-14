/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:25:37 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/14 20:33:03 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[3] = {2, 1, 3};

	ft_sort_int_tab(&*tab, 3);
	printf("0 %d, 1 %d, 2 %d", tab[0], tab[1], tab[2]);
}
