/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:51:37 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/06 16:44:28 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisor;
	int	dividendo;

	divisor = *a;
	dividendo = *b;
	*a = divisor / dividendo;
	*b = divisor % dividendo;
}

/*int	main(void)
{
	int a = 58;
	int b = 7;

	ft_ultimate_div_mod(&a, &b);

	printf("o resultado da divisao e %d e o resto e %d", a, b);

	return(0);
}*/
