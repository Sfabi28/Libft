/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:07:49 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 12:07:54 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	size_t	cont;
	size_t	grandezza;

	cont = 0;
	grandezza = 0;
	while (s[grandezza])
		grandezza++;
	arr = malloc (sizeof (char) * grandezza + 1);
	if (arr == NULL)
		return (NULL);
	while (s[cont])
	{
		arr[cont] = s[cont];
		cont++;
	}
	arr[cont] = '\0';
	return ((char *)(arr));
}
/*
int main() {
    const char *original = "Hello, World!";
    char *duplicated = ft_strdup(original);

    if (duplicated != NULL) {
        printf("Stringa originale: %s\n", original);
        printf("Copia della stringa: %s\n", duplicated);

        // Assicurati di liberare la memoria allocata dinamicamente
        free(duplicated);
    } else {
        printf("Errore nell'allocazione di memoria.\n");
    }

    return 0;
}*/	
