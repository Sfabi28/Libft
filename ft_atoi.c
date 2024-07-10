/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:08:02 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/11 11:08:04 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	result;
	size_t	cont;
	size_t	segno;

	cont = 0;
	result = 0;
	segno = 1;
	while ((nptr[cont] >= 9 && nptr[cont] <= 13) || (nptr[cont] == ' '))
		cont++;
	if (nptr[cont] == '-' || nptr[cont] == '+')
	{
		if (nptr[cont] == '-')
			segno = -1;
		cont++;
	}
	if (nptr[cont] < '0' || nptr[cont] > '9')
		return (0);
	while (nptr[cont] >= '0' && nptr[cont] <= '9')
	{
		result = result * 10 + (nptr[cont] - '0');
		cont++;
	}
	return (result * segno);
}
/*
int main()
{
 char  strin[] = {"    a2417s5iiandi"};
 int dest = ft_atoi(strin);
 printf("%d", dest);
}
*/
