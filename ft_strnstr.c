/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:17:56 by aadnane           #+#    #+#             */
/*   Updated: 2021/11/30 15:42:48 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (*n == '\0')
		return ((char *)haystack);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		while (h[i + j] == n[j] && i + j < len)
		{
			if (n[j + 1] == '\0')
				return ((char *)&haystack[i]);
				j++;
		}
		i++;
	}
	return (0);
}
