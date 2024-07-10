/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:07:21 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/12 16:07:24 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		cont;
	char	*result;

	len = 0;
	cont = 0;
	while (s[len])
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (s[cont])
	{
		result[cont] = f(cont, s[cont]);
		cont++;
	}
	result[cont] = '\0';
	return (result);
}
/*
char to_upper(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main() {
    const char *input = "Hello, world!";
    char *result = ft_strmapi(input, to_upper);

    if (result != NULL) {
        printf("Stringa di input: %s\n", input);
        printf("Stringa risultante: %s\n", result);
        free(result); // Assicuriamoci di liberare la memoria allocata
    } else {
        printf("Errore di allocazione di memoria.\n");
    }

    return 0;
}*/
