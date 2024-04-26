/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:36:05 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 10:08:04 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	u;

	u = 0;
	while (s1[u] != '\0' || s2[u] != '\0')
	{
		if (s1[u] != s2[u])
			return (s1[u] - s2[u]);
		if (s1[u] == s2[u])
			u++;
	}
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_int_tab(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
