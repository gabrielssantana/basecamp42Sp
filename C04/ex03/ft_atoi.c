/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:45:40 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 16:45:23 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	len;
	int	nbr;
	int	nbr_neg;

	len = 0;
	nbr = 0;
	nbr_neg = 0;
	while (str[len] && str[len] <= ' ')
		len++;
	while (str[len] == '-' || str[len] == '+')
		if (str[len++] == '-')
			nbr_neg++;
	while (str[len] >= '0' && str[len] <= '9')
		nbr = nbr * 10 + (str[len++] - '0');
	if (nbr_neg % 2 == 1)
		return (nbr * -1);
	return (nbr);
}
