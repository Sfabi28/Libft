/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:17:12 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/12 10:17:15 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	trim(char const *s1, char const *set, int segno);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		start;
	int		end;
	int		cont;
	int		len;

	cont = 0;
	len = ft_strlen(s1);
	start = trim(s1, set, 1);
	end = trim(s1, set, -1) + 1;
	if (end < start)
		end = start;
	arr = malloc(sizeof(char) * (end - start + 1));
	if (arr == NULL)
		return (NULL);
	while (start < end)
	{
		arr[cont] = s1[start];
		cont++;
		start++;
	}
	arr[cont] = '\0';
	return ((char *)(arr));
}

int	trim(char const *s1, char const *set, int segno)
{
	int	cont1;
	int	cont2;

	if (segno == 1)
		cont1 = 0;
	else
		cont1 = ft_strlen(s1) - 1;
	cont2 = 0;
	while (set[cont2])
	{
		if (set[cont2] == s1[cont1])
		{
			cont1 += segno;
			cont2 = 0;
		}
		else
			cont2++;
	}
	return (cont1);
}
/*
int	ft_strlen(char const*in)
{
	int	prov;

	prov = 0;
	while (in[prov])
		prov++;
	return (prov);
}

int main() {
    const char *s1 = "bhsbhello world , ciaobh bh";
    const char *set = "";

    char *result = ft_strtrim(s1, set);
    if (result) {
        printf("Trimmed string: \"%s\"\n", result);
        free(result); 
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
