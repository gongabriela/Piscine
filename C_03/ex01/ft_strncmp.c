/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:08:52 by ggoncalv          #+#    #+#             */
/*   Updated: 2024/08/14 17:36:16 by ggoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int   main(void)
{
        char s1[] = "gabigoncal";
        char s2[] = "gabigonccal";
        
	printf("%d\n", ft_strncmp(s1, s2, 15));
	printf("%d\n", strncmp(s1, s2, 15));
}*/
