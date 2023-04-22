/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betapan <betapan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:23:56 by betapan           #+#    #+#             */
/*   Updated: 2023/03/23 09:33:52 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < 10)
		{
			ft_putchar(nb + 48);
			return ;
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}	
	}	
}
