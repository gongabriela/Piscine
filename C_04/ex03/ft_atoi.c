/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:34:57 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/17 11:49:56 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == 32 || (str[i] == '-') || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i++] - '0';
	}
	return (result * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("----++---++--\n\f\v5749abd8310"));

	printf("%d\n", ft_atoi("---+--+1234ab567"));

	printf("%d\n", ft_atoi("0"));

	printf("%d\n", ft_atoi("--+++++-\f0"));

	printf("%d\n", ft_atoi("9"));

	printf("%d\n", ft_atoi("--900"));

	printf("%d\n", ft_atoi("\n\n\n\n\n\n\n\n\n10"));

	printf("%d\n", ft_atoi("-1"));
}*/
