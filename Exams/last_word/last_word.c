#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int s;
	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
		i++;
	i = i - 1;
	while (argv[1][i] == ' ')
		i--;
	s = i; // onde acaba a ultima palavra
	while (argv[1][i] != ' ' && 0 <= i)
		i--;
	i = i + 1;
	while (i <= s)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
