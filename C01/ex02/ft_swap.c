#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	trans;

	trans = *a;
	*a = *b;
	*b = trans;
}
