/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:57:23 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 12:57:27 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*ptrdest;
	size_t	prov;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (ptrsrc < ptrdest && ptrsrc + n > ptrdest)
	{
		while (n--)
			ptrdest[n] = ptrsrc[n];
		return (dest);
	}
	else
	{
		prov = 0;
		while (prov < n)
		{
			ptrdest[prov] = ptrsrc[prov];
			prov++;
		}
		return (dest);
	}
}
