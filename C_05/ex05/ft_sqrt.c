/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:35:21 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/18 15:54:08 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	k;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		k = i * i;
		if (k == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(42));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(81));
}*/
