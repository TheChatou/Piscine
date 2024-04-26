/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:10:33 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/15 13:52:13 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	s1a[] = "Goula";
	char	s2a[] = "Gloup";
	char	s3a[] = "J'ai mal";
	char	s4a[] = "adele est la ";
	
	printf("%s\n", ft_strncat(s1a, s2a, 1));
	printf("%s\n", ft_strncat(s3a, s4a, 3));
	printf("%s\n", ft_strncat(s4a, s1a, 2));
}*/
