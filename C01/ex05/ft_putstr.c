#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != 0)
	{
		ft_putchar(str[indice]);
		indice++;
	}
}
