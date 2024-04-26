/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:21:53 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/21 21:27:55 by fcoullou         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		++nb;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}
/* 
int	main(void)
{
	printf("2:%d\n", ft_find_next_prime(2));
	printf("5:%d\n", ft_find_next_prime(5));
	printf("7:%d\n", ft_find_next_prime(7));
	printf("13:%d\n", ft_find_next_prime(12));
	printf("97:%d\n", ft_find_next_prime(97));
	printf("97:%d\n", ft_find_next_prime(91));
	printf("13:%d\n", ft_find_next_prime(__INT_MAX__));
	printf("2:%d\n", ft_find_next_prime(0));
	printf("2:%d\n", ft_find_next_prime(1));
} */
