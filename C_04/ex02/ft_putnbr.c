/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:06:37 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/17 11:37:59 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	i = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	while (nb > 9)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (nb <= 9)
		str[i] = nb + '0';
	while (i >= 0)
		write(1, &str[i--], 1);
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(29625914);
	write(1, "\n", 1);

	ft_putnbr(2147483647);
	write(1, "\n", 1);

	ft_putnbr(-79);
}*/
