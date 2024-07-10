/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:06:12 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 10:06:13 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*news1;
	const unsigned char	*news2;
	size_t				cont;

	news1 = (const unsigned char *)s1;
	news2 = (const unsigned char *)s2;
	cont = 0;
	while (cont < n)
	{
		if (cont < n)
		{
			if (news1[cont] != news2[cont])
				return (news1[cont] - news2[cont]);
			cont++;
		}
	}
	return (0);
}
