/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*count;

	if (lst == NULL)
		return (NULL);
	count = lst;
	while (count->next != NULL)
		count = count->next;
	return (count);
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

	printf("%s\n",(char *)ft_lstlast(list)->content);
}*/