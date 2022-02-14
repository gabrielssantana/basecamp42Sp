/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:11:29 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/10 16:09:13 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	length;
	int	is_alpha;
	int	upper_val;
	int	lower_val;

	length = -1;
	is_alpha = 1;
	upper_val = 0;
	lower_val = 0;
	while (str[++length] && is_alpha)
	{
		upper_val = ((str[length] >= 'A') && (str[length] <= 'Z'));
		lower_val = ((str[length] >= 'a') && (str[length] <= 'z'));
		if (upper_val || lower_val)
			is_alpha = 1;
		else
			is_alpha = 0;
	}
	return (is_alpha);
}
