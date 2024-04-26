/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:01:39 by fcoullou          #+#    #+#             */
/*   Updated: 2023/12/14 15:12:05 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("1:%d\n", ft_is_prime(2));
	printf("1:%d\n", ft_is_prime(5));
	printf("1:%d\n", ft_is_prime(7));
	printf("0:%d\n", ft_is_prime(12));
	printf("1:%d\n", ft_is_prime(97));
	printf("0:%d\n", ft_is_prime(91));
	printf("1:%d\n", ft_is_prime(__INT_MAX__));
	printf("0:%d\n", ft_is_prime(0));
	printf("0:%d\n", ft_is_prime(1));
} */
