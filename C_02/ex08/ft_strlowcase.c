/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:04:30 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/08 16:09:57 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
	char	str[] = "ONE PIECE.";
	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}*/
