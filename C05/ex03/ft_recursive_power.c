#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (r *= ft_recursive_power(nb, power - 1));
	return (r);
}
