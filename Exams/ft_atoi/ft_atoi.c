#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\n' || str[i] == ' ' || str[i] == '\f')
		i++;
	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}	
	
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char str[] = "\n\t\v -42";
	printf("funcao copia: %d\n", ft_atoi(str));
	printf("funcao original: %d", atoi(str));
	return (0);
}
