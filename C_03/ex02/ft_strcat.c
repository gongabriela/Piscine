/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:04:28 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/13 15:15:19 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Mundo";
	char	dest[20] = "Hello ";
	char	srct[] = "Mundo";
	char	destt[20] = "Hello ";
	printf("result of copy: %s\n", ft_strcat(dest, src));
	printf("result of original ft: %s\n", strcat(destt, srct));
}*/
