#include <unistd.h>

void	ft_putstr(char *str)
{
	char	letter;

	while (*str != 0)
	{
		letter = *str;
		write(1, &letter, 1);
		++str;
	}
}
