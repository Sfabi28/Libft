/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:17:11 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/09 11:17:16 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *in, int c, size_t n)
{
	char	*ptr;
	size_t	prov;

	ptr = (char *)in;
	prov = 0;
	while (prov < n)
	{
		ptr[prov] = (char)c;
		prov++;
	}
	return (in);
}
/*int main()
{
    char str[101];
    ft_memset(str, 'A', 10);
    printf("%s\n", str);
    return 0;
}*/
