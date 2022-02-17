/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:48:49 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/11 22:59:02 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_vars
{
	unsigned int	s1_length;
	unsigned int	s2_length;
	int				length;
	int				is_equals;

}	t_vars;

void	ft_init_vars(t_vars *vars)
{
	vars->s1_length = 0;
	vars->s2_length = 0;
	vars->length = -1;
	vars->is_equals = 0;
}

int	ft_strcmp(char *s1, char *s2)
{
	t_vars	vars;

	ft_init_vars(&vars);
	while (s1[vars.s1_length])
		vars.s1_length++;
	while (s2[vars.s2_length])
		vars.s2_length++;
	if (vars.s1_length > vars.s2_length)
		vars.is_equals = 1;
	else if (vars.s1_length < vars.s2_length)
		vars.is_equals = -1;
	else
	{
		while (s1[++vars.length] && s2[vars.length])
		{
			if (s1[vars.length] == s2[vars.length])
				vars.is_equals = 0;
		}
	}
	return (vars.is_equals);
}
