#include <unistd.h>

// 33x3 = 99;
//20x5 = 100;

void	putnbr(int nb)
{
	int i = 0;
        char nbstr[3];

        while (9 < nb)
        {
        	nbstr[i] = nb % 10 + '0';
        	nb = nb / 10;
        	i++;
        }
        if(nb <= 9)
        {
        	nbstr[i] = nb + '0';
                i++;
        }
        
	while (0 <= i)
	{
        	write(1, &nbstr[i], 1);
                i--;
	}
	write(1, "\n", 1);
}
int	main(void)
{
	int nb = 1;

	while (nb <= 100)
	{	
		if(nb % 3  == 0 && nb % 5 != 0)
			write(1, "fizz\n", 5);
		else if (nb % 5 == 0 && nb % 3 != 0)
			write(1, "buzz\n", 5);
		else if (nb % 5 == 0 && nb % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else
			putnbr(nb);
		nb++;
	}
	return (0);
}

