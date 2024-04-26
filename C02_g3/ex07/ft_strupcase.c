/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:53:30 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 11:27:02 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/* int main()
{
	char a[] = "abcdef";
	char b[] = "ABCDeF";
	char c[] = "01234a";
	char d[] = "";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(d));
	return (0);
}*/
