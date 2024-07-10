/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:23:03 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 13:23:23 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	cont;

	cont = 0;
	if (start >= ft_strlen(s))
		len = 0;
	if (len != 0 && len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	while (cont < len && s[start] != '\0')
	{
		arr[cont] = s[start];
		cont++;
		start++;
	}
	arr[cont] = '\0';
	return (arr);
}
/*int main()
{
    const char *input_string = "lorem ipsum dolor";
    unsigned int start_index = 0;
    size_t substring_length = 10;

    char *substring = ft_substr(input_string, start_index, substring_length);

    if (substring == NULL) {
        printf("Errore durante la creazione della sottostringa.\n");
        return 1;
    }

    printf("Sottostringa: %s\n", substring);

    free(substring); 

    return 0;
}*/
