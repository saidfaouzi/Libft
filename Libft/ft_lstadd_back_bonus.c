/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addlast;

	if (*lst == NULL)
		*lst = new;
	else
	{
		addlast = *lst;
		while (addlast->next != NULL)
			addlast = addlast->next;
		addlast->next = new;
	}
	new->next = NULL;
}
/*#include <stdio.h>
int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	while (list)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("\n");

	return (0);
}*/
