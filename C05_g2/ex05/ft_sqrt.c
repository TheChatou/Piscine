/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:33:49 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/21 21:00:26 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	while (i * i < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	return (0);
}

/* int	main(void)
{
	printf("2:%d\n", ft_sqrt(4));
	printf("3:%d\n", ft_sqrt(9));
	printf("0:%d\n", ft_sqrt(0));
	printf("0:%d\n", ft_sqrt(INT_MAX));
} */
