#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		r *= nb;
		power--;
	}
	return (r);
}
