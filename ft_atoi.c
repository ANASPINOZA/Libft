/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:31:23 by aadnane           #+#    #+#             */
/*   Updated: 2021/12/12 23:09:03 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	base;
	int	sign;

	i = 0;
	sign = 1;
	base = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v'))
		i++;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		base = base * 10 + (str[i] - '0');
		i++;
	}
	return (base * sign);
}
