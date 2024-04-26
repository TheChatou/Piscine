/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:38:55 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/22 11:12:58 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	rslt;

	rslt = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	rslt = ft_recursive_power(nb, power - 1) * rslt;
	return (rslt);
}

/* int	main(void)
{
	printf("%d\n", ft_recursive_power(6, 0));
	printf("%d\n", ft_recursive_power(-3, 2));
	printf("%d\n", ft_recursive_power(12, 4));
	printf("%d\n", ft_recursive_power(2, 15000));
	printf("%d\n", ft_recursive_power(0, 0));
} */
