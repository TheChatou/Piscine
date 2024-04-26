/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:33:24 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/20 12:19:04 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	rslt;

	rslt = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index != 1)
		rslt = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (rslt);
}

/*int	main(void)
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(7));
}*/
