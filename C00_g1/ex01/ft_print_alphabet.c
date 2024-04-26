/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:01:31 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/11 19:35:49 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 26)
	{
		c = 'a' + i;
		write (1, &c, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
