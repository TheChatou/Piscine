/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:30:11 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/12 09:18:53 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	i = 0;
	x = size -1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[x];
		tab[x] = tmp;
		i++;
		--x;
	}
}

/*int	main(void)
{
	int	tab[4] = {-22,48,0,666};

	ft_rev_int_tab(tab, 4);
	printf("%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3]);
}*/
