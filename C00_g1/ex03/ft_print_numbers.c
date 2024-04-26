/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:01:31 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/07 11:59:56 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	d;

	i = 0;
	while (i < 10)
	{
		d = '0' + i;
		write (1, &d, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
