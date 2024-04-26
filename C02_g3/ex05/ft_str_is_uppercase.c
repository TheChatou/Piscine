/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:46:18 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 10:23:46 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int   main(void)
{
        printf("%s\n%s\n%s\n%s\n%s\n%s\n",
        ft_str_is_uppercase("")?"OK":"Fail",
        !ft_str_is_uppercase("ABWXZabcd3864387xyz")?"OK":"Fail",
        ft_str_is_uppercase("BGSBSTBRSTB")?"OK":"Fail",
        !ft_str_is_uppercase(" ")?"OK":"Fail",
        !ft_str_is_uppercase("\\")?"OK":"Fail",
        !ft_str_is_uppercase("\n")?"OK":"Fail");
}*/
