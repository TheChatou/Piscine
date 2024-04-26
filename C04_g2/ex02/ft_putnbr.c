/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:10:34 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 18:15:47 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	num;

	if (nb < 0)
	{	
		write(1, "-", 1);
		num = nb * -1;
	}
	else
		num = nb;
	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_putnbr(9);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(2147483646);
	write(1, "\n", 1);
	ft_putnbr(2147483645);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
} */
