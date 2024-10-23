#include <unistd.h>

void	ft_countdown(void)
{
	write(1, "9876543210", 10);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
}
