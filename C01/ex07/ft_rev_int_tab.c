#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		indicex;
	int		indicey;
	int		trans;

	trans = 0;
	indicex = 0;
	indicey = size - 1;
	while (indicex < (size / 2))
	{
		trans = tab[indicex];
		tab[indicex] = tab[indicey];
		tab[indicey] = trans;
		indicex++;
		indicey--;
	}
}
