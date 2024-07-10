/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:05:11 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 11:05:15 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *in)
{
	size_t	prov;

	prov = 0;
	while (in[prov])
		prov++;
	return (prov);
}

/*int main()
{
	int ris;
	ris = ft_strlen("");
	printf("%d",ris);
}*/
