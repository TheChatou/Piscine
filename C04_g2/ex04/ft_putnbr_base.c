/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:23:24 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 18:12:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	long	lnbr;

	lnbr = nbr;
	base_len = ft_strlen(base);
	i = 0;
	if (base_len >= 2 && check(base) == 1)
	{
		if (lnbr < 0)
		{
			ft_putchar('-');
			lnbr = -lnbr;
		}
		if (lnbr < base_len)
			ft_putchar(base[lnbr]);
		else if (lnbr >= base_len)
		{
			ft_putnbr_base(lnbr / base_len, base);
			ft_putnbr_base(lnbr % base_len, base);
		}
		else
			return ;
	}
}

/* int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(2147483647, "01");
	write(1, "\n2a:", 4);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n29a:", 5);
	ft_putnbr_base(666, "012+3456789abcdef");
	write(1, "\n29a:", 5);
	ft_putnbr_base(666, "0123456789abcdef");
} */
