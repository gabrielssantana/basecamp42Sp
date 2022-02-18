/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:15:39 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/18 20:51:17 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Não passou, motivos: não sei, mas tenho que consertar

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	length = 0;
	if (size == 0)
		return (src_len);
	while (src[length] && (dest_len + length) < (size - 1))
	{
		dest[length + dest_len] = src[length];
		length++;
	}
	if (length < size)
		dest[dest_len + length] = '\0';
	if (dest_len > size)
		return (src_len + size);
	return (dest_len + src_len);
}
