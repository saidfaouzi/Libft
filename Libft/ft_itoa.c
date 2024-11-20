/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 12:01:02 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min_int(void)
{
	char	*intmin;
	char	*str;
	int		i;

	intmin = "-2147483648";
	i = 0;
	str = malloc(12);
	if (str == NULL)
		return (NULL);
	while (intmin[i])
	{
		str[i] = intmin[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_lenght(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_fill(int n)
{
	char	*str;
	int		i;
	int		s;

	i = ft_lenght(n);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	s = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		s = 1;
	}
	while (i > s)
	{
		str[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		str = ft_min_int();
	else if (n == 0)
	{
		str = malloc(2);
		if (str == NULL)
			return (NULL);
		str[0] = 0 + 48;
		str[1] = '\0';
		return (str);
	}
	else
		str = ft_fill(n);
	return (str);
}
