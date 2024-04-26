/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:20:19 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/12 17:52:33 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	neg_to_pos(int *x, int *y)
{
	if (*x < 0)
		*x = -*x;
	if (*y < 0)
		*y = -*y;
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (j < y)
	{
		while (i < x)
		{
			if ((i > 0 && i < x - 1) && (j == 0 || j == y - 1))
				ft_putchar('-');
			else if ((j > 0 && j < y - 1) && (i == 0 || i == x - 1))
				ft_putchar('|');
			else if ((i > 0 && i < x - 1) && (j > 0 && j < y - 1))
				ft_putchar(' ');
			else
				ft_putchar('o');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
