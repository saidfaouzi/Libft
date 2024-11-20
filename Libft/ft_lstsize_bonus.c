/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*count;
	int		i;

	i = 0;
	count = lst;
	while (count != NULL)
	{
		i++;
		count = count->next;
	}
	return (i);
}
/*#include <stdio.h>
int main ()
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("said1");
	t_list *node2 = ft_lstnew("said1");
	t_list *node3 = ft_lstnew("said1");
	t_list *node4 = ft_lstnew("said1");
	t_list *node5 = ft_lstnew("said1");


	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	ft_lstadd_back(&list, node4);
	ft_lstadd_back(&list, node5);

	printf("%i\n", ft_lstsize(list));
}*/
