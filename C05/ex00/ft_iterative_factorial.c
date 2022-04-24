#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	r = 1;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
