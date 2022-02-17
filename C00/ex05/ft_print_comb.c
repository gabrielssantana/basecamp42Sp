/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:45:00 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/08 13:17:01 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_variables
{
	int		fst;
	int		scd;
	int		trd;
	char	comma;
	char	space;

}	t_variables;

void	ft_print(t_variables vars)
{
	while (vars.fst <= '7')
	{
		if ((vars.fst < vars.scd) && (vars.scd < vars.trd))
		{
			write(1, &vars.fst, 1);
			write(1, &vars.scd, 1);
			write(1, &vars.trd, 1);
			if (vars.fst != '7')
				write(1, &vars.comma, 1);
			if (vars.fst != '7')
				write(1, &vars.space, 1);
		}
		if (vars.trd++ == '9')
		{
			vars.trd = '0';
			vars.scd++;
		}
		if (vars.scd > '9')
		{
			vars.scd = '0';
			vars.fst++;
		}
	}
}

void	ft_print_comb(void)
{
	t_variables	vars;

	vars.fst = '0';
	vars.scd = '0';
	vars.trd = '0';
	vars.comma = ',';
	vars.space = ' ';
	ft_print(vars);
}
