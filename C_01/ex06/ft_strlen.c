/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:23:38 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/06 17:30:37 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		str++;
		contador++;
	}
	return (contador);
}

/*int     main(void)
{
        char    str[] = "Piscine";
        int result = ft_strlen(str);
        printf("Nesta frase ha %d caracteres", result);
}*/
