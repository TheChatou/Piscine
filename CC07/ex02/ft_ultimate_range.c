/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:25:12 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 11:09:12 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		dest_len;	

	i = 0;
	dest_len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (dest_len));
	while (i < dest_len)
	{	
		(*range)[i] = min + i;
		i++;
	}
	return (dest_len);
}

/* int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
	free(range);
} */