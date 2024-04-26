/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:42:20 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 10:13:28 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int   main(void)
{
        printf("%s\n%s\n%s\n%s\n%s\n%s\n",
        ft_str_is_numeric("")?"OK":"Fail",
        !ft_str_is_numeric("ABWXZabcdefgxyz")?"OK":"Fail",
        ft_str_is_numeric("165843543854")?"OK":"Fail",
        !ft_str_is_numeric(" ")?"OK":"Fail",
        !ft_str_is_numeric("\\")?"OK":"Fail",
        !ft_str_is_numeric("\n")?"OK":"Fail");
}*/
