/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:47:03 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/06 16:43:45 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	divisao = 0;
	int	resto = 0;

	ft_div_mod(40, 2, &divisao, &resto);

	printf("O resultado da divisao  é %d. O resto é %d.", divisao, resto);

	return (0);
}*/
