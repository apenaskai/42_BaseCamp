#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
		return (0);
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
