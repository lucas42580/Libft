/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:35:57 by lpaysant          #+#    #+#             */
/*   Updated: 2024/11/27 13:54:01 by lpaysant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ptr;
	t_list	*ptr2;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr2 = ft_lstnew(f(ptr->content));
		if (!ptr2)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, ptr2);
		ptr = ptr->next;
	}
	return (new);
}
