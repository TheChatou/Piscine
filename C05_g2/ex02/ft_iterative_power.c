/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:19:13 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/22 11:12:53 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rslt;

	i = 1;
	rslt = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		rslt = nb * rslt;
		i++;
	}
	return (rslt);
}

/* int	main(void)
{
	printf("%d\n", ft_iterative_power(6, 0));
	printf("%d\n", ft_iterative_power(-3, 2));
	printf("%d\n", ft_iterative_power(51651616, 2));
	printf("%d\n", ft_iterative_power(554665561, 11115345));
	printf("%d\n", ft_iterative_power(0, 1));
} */
