/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:20:39 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/12 09:16:50 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	i = 0;
	x = size -1;
	while (i < x)
	{
		while (tab[i +1] < tab[i])
		{
			tmp = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = tmp;
		}
		i++;
		if (i == x)
		{
			size--;
			x--;
			i = 0;
		}
	}
}

/*int	main(void)
{
	int c[5] = {55,-10,0,54,-99};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
}*/
