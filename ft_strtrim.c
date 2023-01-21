/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:24:43 by aadnane           #+#    #+#             */
/*   Updated: 2021/12/14 02:17:21 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0' || *set == 0)
		return (ft_strdup(s1));
	i = 0;
	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, s1[start]) != 0 && start < end + 1)
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end > 0)
		end--;
	if (end <= 0)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
