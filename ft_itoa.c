/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:45:35 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/12 14:45:37 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countlen(int n);

static char	*caso_0(void);

char	*ft_itoa(int n)
{
	int				indice;
	int				end;
	char			*result;
	unsigned int	num;

	if (n == 0)
		return (caso_0());
	indice = countlen(n);
	end = 0;
	result = malloc(sizeof(char) * (indice + 1));
	if (result == NULL)
		return (NULL);
	result[indice] = '\0';
	num = n;
	if (n < 0)
	{
		result[end++] = '-';
		num = -n;
	}
	while (end < indice--)
	{
		result[indice] = '0' + num % 10;
		num = num / 10;
	}
	return (result);
}

static	int	countlen(int n)
{
	unsigned int	num;
	long int		cont;
	int				len;

	cont = 1;
	len = 0;
	if (n < 0)
	{
		len++;
		num = n * -1;
	}
	else
		num = n;
	while (num / cont > 0)
	{
		cont = cont * 10;
		len++;
	}
	return (len);
}

static char	*caso_0(void)
{
	char	*result;

	result = malloc(sizeof(char) * 2);
	if (result == NULL)
		return (NULL);
	result[0] = '0';
	result[1] = '\0';
	return (result);
}
/*
int main() {
    int num = -304293468; // Sostituisci con il numero che desideri convertire

    char *str = ft_itoa(num);

    if (str == NULL) {
        printf("Errore nell'allocazione di memoria.\n");
        return 1;
    }

    printf("Numero intero: %d\n", num);
    printf("Numero convertito in stringa: %s\n", str);

    free(str); // Assicurati di liberare la memoria allocata

    return 0;
}*/
