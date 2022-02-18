/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:30:56 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 15:51:56 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat_base(char *base, char c)
{
	int	len;
	int	repeated;

	len = -1;
	repeated = 0;
	while (base[++len])
		if (base[len] == c)
			repeated++;
	if (repeated == 1)
		return (0);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr > (len - 1))
		ft_print((nbr / len), base, len);
	ft_putchar(base[nbr % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = -1;
	while (base[++len])
		if (base[len] <= 32
			|| base[len] > 126
			|| base[len] == '+'
			|| base[len] == '-'
			|| ft_repeat_base(base, base[len]))
			return ;
	if (len < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, len);
	}
	else
		ft_print(nbr, base, len);
}
