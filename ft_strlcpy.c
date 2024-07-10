/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:05:44 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 14:05:47 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size == 0)
	{
		while (src[cont])
			cont++;
		return (cont);
	}
	while (src[cont] && cont < size - 1)
	{
		dst[cont] = src[cont];
		cont++;
	}
	if (cont < size)
		dst[cont] = '\0';
	while (src[cont] != '\0')
		cont++;
	return (cont);
}
