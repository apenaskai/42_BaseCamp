#include <unistd.h>

int	g_n1;
int	g_n2;
int	g_n3;

n1 = '0';
n2 = '1';
n3 = '2';

void	ft_print_comb(void)
{
	while (n1 < 7)
	{
		while (n2 < 8)
		{
			while (n3 < 9)
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				write(1, ",", 1);
				write(1, " ", 1);
				n3++;
			}
			n3 = ++n2 + 1;
		}
		n2 = ++n1 ;
	}
	write(1, "789", 3);
}
