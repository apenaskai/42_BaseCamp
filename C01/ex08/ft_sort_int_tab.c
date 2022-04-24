#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		trans;
	int		indice;

	indice = 0;
	while (indice < (size - 1))
	{
		if (tab[indice] > tab[indice + 1])
		{
			trans = tab[indice];
			tab[indice] = tab[indice + 1];
			tab[indice + 1] = trans;
			indice = 0;
		}
		else
			indice++;
	}
}
