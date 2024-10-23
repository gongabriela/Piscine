char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Hello World!!!!";
	char	s2[] = ""; 
	printf("%s\n",ft_strcpy(s1, s2));

	char s1t[] = "Hello WOrld!!!!";
	char s2t[] = "";
	printf("%s", strcpy(s1t, s2t));

}*/
