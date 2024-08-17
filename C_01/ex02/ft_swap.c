/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:04:55 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/06 16:42:25 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int a = 0;
	int b = 1;
	ft_swap(&a, &b);

	printf("Os numeros sao %d e %d", a, b);

	return (0);
}*/
