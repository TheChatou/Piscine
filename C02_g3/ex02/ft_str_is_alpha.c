/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:11:11 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 10:06:40 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			|| ((str[i] >= 'A') && (str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_alpha("")?"OK":"Fail",
	ft_str_is_alpha("ABWXZabcdefgxyz")?"OK":"Fail",
	!ft_str_is_alpha("1")?"OK":"Fail",
	!ft_str_is_alpha(" ")?"OK":"Fail",
	!ft_str_is_alpha("\\")?"OK":"Fail",
	!ft_str_is_alpha("\n")?"OK":"Fail");
}*/
