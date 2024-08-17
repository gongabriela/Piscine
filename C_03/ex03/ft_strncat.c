/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:41:15 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/13 15:56:25 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	if (n > 0)
		dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "tudo";
	char dest[20] = "oi";
	char srct[] = "tudo";
	char destt[20] = "oi";
	printf("the result for the copy ft is: %s\n", ft_strncat(dest, src, 5));
	printf("the result for the original ft is: %s", strncat(destt, srct, 5));
}*/
