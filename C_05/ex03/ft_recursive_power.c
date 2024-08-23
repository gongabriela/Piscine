/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:09:48 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/19 17:07:30 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	power--;
	return (nb * ft_recursive_power(nb, power));
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(2, -2));
	printf("%d\n", ft_recursive_power(-2, 2));
	printf("%d\n", ft_recursive_power(-2, -2)); 
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 2)); 
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(2, 2));
}*/
