/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clearing;
	t_list	*clearing2;

	clearing = *lst;
	while (clearing != NULL)
	{
		clearing2 = clearing->next;
		del(clearing->content);
		free(clearing);
		clearing = clearing2;
	}
	*lst = NULL;
}
/*#include <stdio.h>
void	test_print(t_list *list)
{
	if (!list)
	{
		printf("List is empty\n");
		return ;
	}
	while (list)
	{
		printf("%s -> ", (char *)list->content);
		list = list->next;
	}
	printf("\n");
}
void	del(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	printf("before \n");
	test_print(list);

	ft_lstclear(&list, del);

	printf("after \n");
	test_print(list);

}*/