#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	while (nb == 0 || nb == 1)
		return(1);
	while (nb > 0)
	{
		for (int i = (nb - 1); i > 1; i--)
			nb *= i;
		return(nb);
	}
	return(0);
}