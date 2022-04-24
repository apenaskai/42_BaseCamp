#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	trans;

	trans = *a / *b;
	*b = *a % *b;
	*a = trans;
}
