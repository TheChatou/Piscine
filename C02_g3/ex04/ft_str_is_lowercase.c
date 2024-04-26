/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:34:43 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 10:19:07 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int   main(void)
{
        printf("%s\n%s\n%s\n%s\n%s\n%s\n",
        ft_str_is_lowercase("")?"OK":"Fail",
        !ft_str_is_lowercase("ABWXZabcdefg46z")?"OK":"Fail",
        ft_str_is_lowercase("kcbhouduc")?"OK":"Fail",
        !ft_str_is_lowercase(" ")?"OK":"Fail",
        !ft_str_is_lowercase("\\")?"OK":"Fail",
        !ft_str_is_lowercase("\n")?"OK":"Fail");
}*/
