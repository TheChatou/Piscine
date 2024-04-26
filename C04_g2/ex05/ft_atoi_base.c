/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:15:02 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/25 18:26:29 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	checkb(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (0);
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkn(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	rslt;
	int		sign;

	i = 0;
	rslt = 0;
	sign = 1;
	if (!checkb(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (checkn(str[i], base) != -1 && str[i])
	{
		rslt *= ft_strlen(base);
		rslt += checkn(str[i], base);
		i++;
	}
	return (rslt * sign);
}

/* int	main(void)
{
	printf("%d\n", ft_atoi_base("  2323  ", "01234"));
	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
} */
