/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:32:09 by aadnane           #+#    #+#             */
/*   Updated: 2021/12/13 21:46:30 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	if (n == 0)
		return (NULL);
	while (i < n - 1 && str[i] != ch)
		i++;
	if (str[i] == ch)
		return ((void *)&s[i]);
	return (NULL);
}
