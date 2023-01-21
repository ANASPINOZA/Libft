/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadnane <aadnane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 02:06:05 by aadnane           #+#    #+#             */
/*   Updated: 2022/11/04 02:06:31 by aadnane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_node;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		old_node = *lst;
		*lst = old_node->next;
		free(old_node);
	}
	*lst = NULL;
}