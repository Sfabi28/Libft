/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:51:32 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 09:51:37 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*news;
	unsigned char	newc;

	news = (unsigned char *)s;
	newc = (unsigned char)c;
	cont = 0;
	while (cont < n)
	{
		if (news[cont] == newc)
			return ((unsigned char *)(news + cont));
		cont++;
	}
	return (0);
}
