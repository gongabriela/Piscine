/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:16:54 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/08 16:07:29 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "one piece.";
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/
