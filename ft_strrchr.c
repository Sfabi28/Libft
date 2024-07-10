/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:06:31 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 15:06:33 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				leng;
	unsigned char	newc;

	newc = (unsigned char) c;
	leng = 0;
	while (s[leng])
		leng++;
	while (leng >= 0)
	{
		if (s[leng] == newc)
			return ((char *)(s + leng));
		leng--;
	}
	return (NULL);
}
