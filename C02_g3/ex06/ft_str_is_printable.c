/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:51:13 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/17 10:40:36 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	str[30] = "%s In: 0x%*d[zb6j1] \n	jn";
	char	str1[30] = "ejhfwekbsefj";
	char	str2[30] = "";

	printf("%d", ft_str_is_printable(str));
	printf("%d", ft_str_is_printable(str1));
	printf("%d", ft_str_is_printable(str2));
}*/
