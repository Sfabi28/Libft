/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:41:09 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 12:41:11 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*ptrdest;
	size_t	cont;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	cont = 0;
	while (cont < n)
	{
		ptrdest[cont] = ptrsrc[cont];
		cont++;
	}
	return (dest);
}

/*int main() {
    char src[] = "Ciao, mondo!";
    char dest[20]; 


    ft_memcpy(dest, src, 13);

    printf("Sorgente: %s\n", src);
    printf("Destinazione: %s\n", dest);

    return 0;
}*/
