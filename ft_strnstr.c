/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:21:43 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 10:21:47 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cont1;
	size_t	cont2;
	size_t	ris;

	cont1 = 0;
	cont2 = 0;
	ris = ft_strlen(little);
	if (little[cont1] == '\0')
		return ((char *)(big));
	while (cont1 < len && big[cont1] && little[cont2])
	{
		if (big[cont1] == little[cont2])
			cont2++;
		else
		{
			cont1 = cont1 - cont2;
			cont2 = 0;
		}
		cont1++;
	}
	if (cont2 == ris)
		return ((char *)(big + cont1 - ris));
	else
		return (NULL);
}
/*int main() {
    const char *bigString = "aaabcabcd";
    const char *searchString = "abcd";
    size_t maxLen = 9; // Lunghezza massima da cercare

    char *result = ft_strnstr(bigString, searchString, maxLen);

    if (result != NULL) {
        printf("Sottostringa trovata: %s\n", result);
    } else {
        printf("Sottostringa non trovata.\n");
    }

    return 0;
}*/
