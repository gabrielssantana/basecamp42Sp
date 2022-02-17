/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:15:52 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/16 22:44:14 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_length;
	int				src_length;
	unsigned int	length;

	dest_length = 0;
	src_length = -1;
	length = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[++src_length] && length++ < nb)
		dest[dest_length++] = src[src_length];
	dest[dest_length] = '\0';
	return (dest);
}
