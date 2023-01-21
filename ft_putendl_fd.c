/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:01:05 by aadnane           #+#    #+#             */
/*   Updated: 2021/12/16 00:10:17 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	new_line;

	if (s == NULL || fd < 0)
		return ;
	new_line = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &new_line, 1);
}
