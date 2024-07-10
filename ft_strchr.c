/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:00:52 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 15:00:55 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				cont;
	unsigned char	newc;

	newc = (unsigned char) c;
	cont = 0;
	while (s[cont] != newc)
	{
		if (s[cont] == '\0')
			return (NULL);
		cont++;
	}
	if (s[cont] == newc)
		return ((char *)(s + cont));
	return (NULL);
}
