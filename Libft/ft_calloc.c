/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfaouzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:58:03 by sfaouzi           #+#    #+#             */
/*   Updated: 2024/11/06 11:58:03 by sfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*callo;
	size_t	nombre;

	nombre = nmemb * size;
	callo = malloc(nombre);
	if (callo == NULL)
		return (NULL);
	ft_memset(callo, 0, nombre);
	return (callo);
}
