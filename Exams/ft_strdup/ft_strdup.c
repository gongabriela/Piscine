#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int size;
	static char *dup;
	char *dup_offset;

	while (src[i] != '\0')
		i++;
	size = i;
	dup = (char *)malloc(sizeof(char)*size);
	if (dup == NULL)
		return ((char*)NULL);
	dup_offset = dup;
	while (*src)
	{
		*dup_offset = *src;
		dup_offset++;
		src++;
	}
	*dup_offset = '\0';

	return (dup);
}

int	main(void)
{
	char src[] = "
