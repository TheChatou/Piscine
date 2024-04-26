/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:08:32 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/17 11:00:01 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int     main(void)
{
        int             i;
        char    dest[] = "Game Over !!!!!!!";
        char    src[] = "OuiOuiOui";

        printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 18), dest);
        i = 18;
        while (i < 18)
        {
                if (dest[i] != '\0')
                {
                        printf("FAIL!(\\%x) at %d\n", dest[i], dest[i]);
                        return (1);
                }
                i++;
        }
        return (0);
}*/
