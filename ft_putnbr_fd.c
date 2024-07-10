/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:46:11 by sfabi             #+#    #+#             */
/*   Updated: 2023/10/12 16:46:13 by sfabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long long	n_cifre;
	unsigned long long	num;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			num = n * -1;
		}
		else
			num = n;
		n_cifre = 10;
		while (num >= n_cifre)
			n_cifre = n_cifre * 10;
		while (n_cifre > 1)
		{
			n_cifre = n_cifre / 10;
			ft_putchar('0' + num / n_cifre, fd);
			num = num % n_cifre;
		}
	}
}
/*
int main() {
    int number = 10;
    
    ft_putnbr_fd(number, 1);
    
    return 0;
}*/
