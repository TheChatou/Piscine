/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:32:21 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/19 14:25:45 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
	{
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? "Success" : "Fail");
	
}
