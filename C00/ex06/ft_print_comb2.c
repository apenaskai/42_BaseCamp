#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	while (n2 < 100)
	{
		n1 = n2 + 1;
		while (n1 < 100)
		{
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			if ((n2 / 10 != 9) || (n2 % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n1++;
		}
		n2++;
	}	
}
