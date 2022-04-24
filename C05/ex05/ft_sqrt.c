#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 0;
	if (nb <= 0)
		return (0);
	while (r * r <= nb && r * r >= 0)
	{
		if (r * r == nb)
			return (r);
		r++;
	}
	return (0);
}
