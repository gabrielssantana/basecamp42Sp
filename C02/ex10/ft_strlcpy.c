/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:21:38 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 15:21:39 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	int				src_length;

	length = -1;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size > 0)
	{
		while (src[++length] && (length < size))
			dest[length] = src[length];
		dest[length] = '\0';
	}
	return (src_length);
}
