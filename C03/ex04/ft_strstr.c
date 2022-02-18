/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:33:48 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 20:49:22 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//INCORRETO, PRECISO CONSERTAR

char	*ft_strstr(char *str, char *to_find)
{
	int	find_len;
	int	str_len;
	int	match;

	find_len = 0;
	str_len = 0;
	if (to_find[find_len] == '\0')
		return (str);
	while (to_find[find_len])
		find_len++;
	while (str[str_len])
	{
		match = 0;
		while (str[str_len] && str[str_len++] == to_find[match++])
			if (to_find[match])
				return (&str[str_len - match]);
	}
	return (0);
}
