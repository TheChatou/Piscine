/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:01:31 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/07 11:41:25 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	d;

	i = 0;
	while (i < 26)
	{
		d = 'z' - i;
		write (1, &d, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
