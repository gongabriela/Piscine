/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:38:39 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/19 20:27:12 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
		{
			nb++;
			i = 2;
		}
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(90));
}*/	
