/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:08:58 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/20 12:18:33 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb != 0)
	{
		rslt = ft_recursive_factorial(nb - 1) * nb;
	}
	return (rslt);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(6));
	printf("%d\n", ft_recursive_factorial(-3));
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(4));
}*/
