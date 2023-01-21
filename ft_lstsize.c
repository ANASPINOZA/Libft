/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:35:19 by aadnane           #+#    #+#             */
/*   Updated: 2022/11/04 01:36:35 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		node_count;
	t_list	*tmp;

	tmp = lst;
	node_count = 0;
	while (tmp != NULL)
	{
		node_count++;
		tmp = tmp->next;
	}
	return (node_count);
}