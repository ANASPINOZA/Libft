/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:36:56 by aadnane           #+#    #+#             */
/*   Updated: 2021/11/26 22:41:14 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = 0;
	while (src[src_size] != '\0')
	src_size++;
	if (dstsize > 0)
	{
	i = 0;
		while (src[i] != '\0' && i < (dstsize - 1))
		{
		dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (src_size);
}
