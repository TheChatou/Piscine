/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:39:54 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 12:40:03 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Papa";
	char s2[] = "Ouioui";
	char s3[] = "Geocache";
	char s4[] = "Geologue";
	char s5[] = "Vu";
	char s6[] = "Weshwesh";

	printf("%d, %d\n", ft_strncmp(s1, s2, 1), strncmp(s1, s2, 1));
	printf("%d, %d\n", ft_strncmp(s3, s4, 5), strncmp(s3, s4, 5));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 3), strncmp(s3, s4, 3));
	printf("%d, %d\n", ft_strncmp(s5, s6, 2), strncmp(s5, s6, 2));
	printf("%d, %d\n", ft_strncmp(s1, s1, 4), strncmp(s1, s1, 4));
	printf("%d, %d\n", ft_strncmp(s1, "", 0), strncmp(s1, "", 0));
}*/
