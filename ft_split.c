/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:52:56 by aadnane           #+#    #+#             */
/*   Updated: 2022/11/04 01:24:53 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_cnt(const char *s, char del)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != del)
		{
			count++;
			while (s[i] != '\0' && s[i] != del)
			i++;
		}
		else
		i++;
	}
	return (count);
}

static void	*free_split(char **split, int i)
{
	while (split[i])
	{
		free(split[i]);
		i--;
	}
	free(split);
	split = NULL;
	return (split);
}

static char	**ft_chck(char **split, const char *s, char c)
{
	size_t		len;
	size_t		i;
	const char	*start;

	i = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		start = s;
		len = 0;
		s--;
		while (*(++s) && *s != c)
			len++;
		if (len)
		{
			if (*(s - 1) != c)
				split[i] = ft_substr(start, 0, len);
			if (!split[i])
				return (free_split(split, i));
			i++;
		}
	}
	split[i] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1));
	if (!split)
		return (0);
	split = ft_chck(split, s, c);
	return (split);
}
