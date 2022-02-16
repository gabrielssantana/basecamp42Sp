/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:29:12 by gasantos          #+#    #+#             */
/*   Updated: 2022/02/15 20:47:13 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	length;

	length = 0;
	while (length < n && src[length])
	{
		dest[length] = src[length];
		length++;
	}
	while (length < n)
		dest[length++] = '\0';
	return (dest);
}
