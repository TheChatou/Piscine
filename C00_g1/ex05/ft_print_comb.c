/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:44:39 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/12 14:04:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	n;
	char	n1;
	char	n2;

	n = '0';
	while (n <= '7')
	{	
		n1 = n + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				write (1, &n, 1);
				write (1, &n1, 1);
				write (1, &n2, 1);
				if (n != '7')
					write (1, ", ", 2);
				n2++;
			}
			n1++;
		}
		n++;
	}	
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
