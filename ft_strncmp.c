/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:44:17 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 17:44:50 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char str1[] = "test\200";
	char str2[] = "test\0";
	unsigned int n = 6; // Numero di caratteri da confrontare

	int result = ft_strncmp(str1, str2, n);
	
	if (result < 0)
		printf("La stringa 1 è piu piccola della stringa 2\n");
	else if (result > 0)
		printf("La stringa 1 è più grande della stringa 2\n");
	else
		printf("La stringa 1 è uguale a la stringa 2\n");

	return 0;
}*/
