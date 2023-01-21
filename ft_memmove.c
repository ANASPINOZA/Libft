/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:25:46 by aadnane           #+#    #+#             */
/*   Updated: 2021/12/13 16:32:51 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*surc;

	if (dst == 0 && src == 0)
		return (0);
	surc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (dest > surc)
	{
		while (i < len)
		{
			dest[len - 1] = surc[len - 1];
			len--;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
