#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j;
	
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		j = 0;
		if ('a' <= argv[1][i] && argv[1][i] <= 'z')
		{
			j = argv[1][i] - 'a' + 1;
			while (j > 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
