/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:52:44 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 11:42:30 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		dest_len;	

	i = 0;
	dest_len = max - min;
	tab = malloc(sizeof(int) * (dest_len) + 1);
	while (i < dest_len)
	{	
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/* int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;
	int size;

	
	i = 0;
	min = 0;
	max = 10;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	min = -3;
	max = 10;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
} */
