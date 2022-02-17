/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:50:13 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/16 17:57:06 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	src_length;

	dest_length = 0;
	src_length = -1;
	while (dest[dest_length])
		dest_length++;
	while (src[++src_length])
		dest[dest_length++] = src[src_length];
	dest[dest_length] = src[src_length];
	return (dest);
}
