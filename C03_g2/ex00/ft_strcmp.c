/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:00:14 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/22 14:12:40 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Papa";
	char s2[] = "Ouioui";
	char s3[] = "Geocache";
	char s4[] = "Geologue";
	char s5[] = "Vu";
	char s6[] = "Weshwesh";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("%d, %d\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	printf("%d, %d\n", ft_strcmp(s5, s6), strcmp(s5, s6));
	printf("%d, %d\n", ft_strcmp(s5, s5), strcmp(s5, s5));
}*/
