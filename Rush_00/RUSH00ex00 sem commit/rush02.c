/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:34:09 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/03 20:23:49 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (iy != y)
	{
		ix = 0;
		while (ix != x)
		{
			if ((ix == 0 || ix == x - 1) && iy == 0)
				ft_putchar('A');
			else if ((ix == 0 || ix == x - 1) && iy == y - 1)
				ft_putchar('C');
			else if ((ix != 0 && ix != x - 1) && (iy == 0 || iy == y - 1))
				ft_putchar('B');
			else if ((ix == 0 || ix == x - 1) && (iy != 0 && iy != y - 1))
				ft_putchar('B');
			else if ((ix != 0 && ix != x - 1) && (iy != 0 && iy != y - 1))
				ft_putchar(' ');
			ix++;
		}
		iy++;
		ft_putchar('\n');
	}
}
