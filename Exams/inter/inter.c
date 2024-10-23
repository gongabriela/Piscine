#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0; 
	int s; // contador dos doubles
	int k = 0;
	int a;
	char str[99];
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i] != '\0')
	{	
		s = 0;	
		while (str[s] != '\0')
		{
			if (argv[1][i] != str[s])
				s++;
		}
		s = k;
		a = 0;
		while (argv[2][a] != 
		if (argv[1][i] == argv[2][a])
		{
			str[] = argv[1][];
			++;
			str[] = '\0';
		}
		else
			
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
	

