/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:19:47 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/10 14:09:41 by fcoullou         ###   ########.fr       */
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

int	corners(int x, int y, int i, int j)
{
	if (((i == 0 && j == 0) || (i == 0 && j == y -1))
		&& (y != 1 && x != 1))
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	neg_to_pos(&x, &y);
	while (j < y)
	{
		while (i < x)
		{
			if (corners(x, y, i, j))
				ft_putchar('A');
			else if ((i == x -1 && j == 0) || (i == x -1 && j == y -1))
				ft_putchar('C');
			else if ((i == 0 || j == y -1) || (i == x -1 || j == 0))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
