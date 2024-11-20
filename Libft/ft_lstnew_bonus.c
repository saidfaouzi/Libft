/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*#include <stdio.h>
int	main(void)
{
	t_list *list = NULL;
	t_list *list1 = ft_lstnew("node 1");
	t_list *list2 = ft_lstnew("node 2");
	t_list *list3 = ft_lstnew("node 3");

	ft_lstadd_back(&list, list1);
	ft_lstadd_back(&list, list2);
	ft_lstadd_back(&list, list3);

	while (list)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("\n");
	printf("%s\n", (char *)list1->content);
}*/
