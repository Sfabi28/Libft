/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:27:17 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 14:27:20 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	lengdst;
	size_t	lengsrc;

	cont = 0;
	lengdst = ft_strlen(dst);
	lengsrc = ft_strlen(src);
	if (size <= lengdst)
		return (lengsrc + size);
	while (src[cont] && (lengdst + cont) < (size - 1))
	{
		dst[lengdst + cont] = src[cont];
		cont++;
	}
	dst[lengdst + cont] = '\0';
	return (lengdst + lengsrc);
}
/*int main() {
    char dest[30] = "sono ben ";
    char src[] = "21 caratteri";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    printf("%zu\n", result);

    return 0;
}*/
