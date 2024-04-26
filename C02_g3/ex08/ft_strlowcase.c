/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:46:42 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 11:30:13 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
        char a[] = "abcDef";
        char b[] = "ABCDeF";
        char c[] = "01234F";
        char d[] = "";

        printf("%s\n", ft_strlowcase(a));
        printf("%s\n", ft_strlowcase(b));
        printf("%s\n", ft_strlowcase(c));
        printf("%s\n", ft_strlowcase(d));
        return (0);
}*/
