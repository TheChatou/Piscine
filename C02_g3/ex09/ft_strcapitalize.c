/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:50:27 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/26 19:08:23 by fcoullou         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0
				|| str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "salut, comMEnt tu vas ? 42mots Quarante-deux; cinquantE+ET+uN";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
} */
