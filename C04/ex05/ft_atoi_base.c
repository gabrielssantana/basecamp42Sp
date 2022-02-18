/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:23 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 16:41:18 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

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

int	check_base(char *base)
{
	int	len;

	len = -1;
	while (base[++len])
	{
		if (ft_strlen(base) < 2)
			return (0);
		if (base[len] == '-'
			|| base[len] == '+'
			|| base[len] <= 32
			|| base[len] >= 127
			|| ft_repeat_base(base, base[len]))
			return (1);
	}
	return (0);
}

int	ft_inside(char c, char *base)
{
	int	len;

	len = -1;
	while (base[++len])
		if (c == base[len])
			return (len);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			len;
	long int	nbr;
	int			nbr_neg;

	len = 0;
	nbr = 0;
	nbr_neg = 0;
	if (check_base(base))
		return (0);
	while (str[len] && str[len] <= ' ')
		len++;
	while (str[len] == '-' || str[len] == '+')
		if (str[len++] == '-')
			nbr_neg++;
	while (ft_inside(str[len], base) != -1)
		nbr = (nbr * ft_strlen(base)) + (ft_inside(str[len++], base));
	if (nbr_neg % 2 == 1)
		return (nbr * -1);
	else
		return (nbr);
}
