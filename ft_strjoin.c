/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:47:37 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 13:49:53 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	cont1;
	size_t	cont2;
	int		len;

	cont1 = 0;
	cont2 = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	arr = malloc(sizeof (char) * len + 1);
	if (arr == NULL)
		return (NULL);
	while (s1[cont1])
	{
		arr[cont1] = s1[cont1];
		cont1++;
	}
	while (s2[cont2])
	{
		arr[cont1] = s2[cont2];
		cont1++;
		cont2++;
	}
	arr[cont1] = '\0';
	return ((char *)(arr));
}
/*
int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";
    
    char *result = ft_strjoin(str1, str2);
    
    if (result != NULL) {
        printf("stringa concatenata: %s\n", result);
        free(result); 
    } else {
        printf("allocazione fallita.\n");
    }

    return 0;
}*/
