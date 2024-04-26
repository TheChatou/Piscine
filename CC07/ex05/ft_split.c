/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:46:17 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/28 19:50:34 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_word(char c, char *charset)
{
	int	j;

	j = 0;
	while (c != charset[j])
	{
		if (charset[j] == '\0')
			return (1);
		j++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**dir;
	int		word_len;
	int		c;

	c = 0;
	i = 0;
	j = 0;
	word_len = 0;
	dir = malloc(sizeof(char) * (ft_strlen(str)) + 1);
	while (str[i + word_len])
	{
		dir[c] = malloc(sizeof(char) * (ft_strlen(str)) + 1);
		i += word_len;
		word_len = 0;
		//Skip quand ya pas de separateur
		while (!is_word(str[i], charset) && str[i + word_len])
			i++;
		while (is_word(str[i + word_len], charset) && str[i + word_len])
		{
			word_len++;
		}
		if ((!is_word(str[i + word_len], charset)
				|| str[i + word_len] == '\0') && word_len != 0)
		{		
			dir[c] = ft_strcpy(dir[c], &str[i], word_len);
			c++;
		}
	}
	dir[c] = 0;
	return (dir);
}

int	main(void)
{
	char	**dir;
	int		c;

	c = 0;
	dir = ft_split("++++++aaa+bbbhh+ccc++-lbjcd;kndc _=ckdb---", "+-=");
	while (dir[c])
	{
		printf("%s\n", dir[c]);
		c++;
	}
}
