/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		lens1;
	int		lens2;

	i = 0;
	lens1 = ft_strlen((char *)s1);
	lens2 = ft_strlen((char *)s2);
	if (!s1 || !s2)
		return (NULL);
	result = malloc(lens1 + lens2 + 1);
	if (result == NULL)
		return (NULL);
	while (i < lens1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		result[i] = s2[i - lens1];
		i++;
	}
	return (result[i] = '\0', result);
}
