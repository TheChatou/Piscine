/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:25:43 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/02 20:54:50 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rslt;

	rslt = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i - 1 != nb)
	{
		rslt = rslt * i;
		i++;
	}
	return (rslt);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(-3));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(28));
	printf("%d\n", ft_iterative_factorial(2));
}
