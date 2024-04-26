/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:16:34 by fcoullou          #+#    #+#             */
/*   Updated: 2023/09/13 22:50:15 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, int y);

/*void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_space(char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
		|| str == '\r' || str == '\t' || str == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
*/
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
	}
	else
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
