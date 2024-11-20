/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	int s1[] = {1,2,1,1};
	int s2[] = {1,1,1,1};
	printf("%i\n", ft_memcmp(s1,s2,8));
	int s11[] = {1,2,1,1};
	int s21[] = {1,1,1,1};
	printf("%i\n", ft_memcmp(s11,s21,8));
}*/
