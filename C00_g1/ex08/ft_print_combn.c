/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:15:09 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/12 13:00:19 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	c;
	char	d;

       	c = '0';
	d = c + '1';
	while ((c <= '8') && (n > 1))
	{
		write (1, &c, 1);
		if ((d <= '9') && (n > 1))
		{
			ft_print_combn(1);			
			write (1, &d, 1);
			d++;
		}
		c++;
	}
	--n;
	write (1, ", ", 1);
}

int	main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	ft_print_combn(3);
}

