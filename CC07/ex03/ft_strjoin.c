/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:09:18 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/13 20:31:08 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strslen(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	int		sep_len;

	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			i++;
		len += i;
		j++;
	}
	sep_len = 0;
	i = 0;
	while (sep[i])
		i++;
	sep_len = i * (size - 1);
	return (len + sep_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strslen(size, strs, sep);
	str = malloc(sizeof(char) * (len + 1));
	while (i < size)
	{		
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	str[len + 1] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc -1, argv +1, ".oOo."));
	printf("%s\n", ft_strjoin(argc -1, argv +1, "iiiiiiiiiiiiiiiiiii"));
	printf("%s\n", ft_strjoin(argc, argv, "_-^-_"));
}
