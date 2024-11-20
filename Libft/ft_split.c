/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	free_strings(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] != NULL)
			free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_countword(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**allocation_piece(int countword, char **str, char *s, char c)
{
	int	i;
	int	j;
	int	countligne;

	i = 0;
	j = 0;
	while (i < countword)
	{
		while (s[j] && s[j] == c)
			j++;
		countligne = 0;
		while (s[j + countligne] && s[j + countligne] != c)
			countligne++;
		str[i] = malloc((countligne + 1) * sizeof(char));
		if (str[i] == NULL)
			return (free_strings(str, i), NULL);
		j += countligne;
		i++;
	}
	str[countword] = NULL;
	return (str);
}

static char	**allocation(char *s, char c)
{
	int		countword;
	char	**str;

	countword = ft_countword(s, c);
	str = malloc((countword + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	str = allocation_piece(countword, str, s, c);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		countword;

	if (!s)
		return (NULL);
	str = allocation((char *)s, c);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		countword = 0;
		while (s[i] && s[i] != c)
			str[j][countword++] = s[i++];
		if (countword > 0)
			str[j++][countword] = '\0';
	}
	str[j] = NULL;
	return (str);
}
