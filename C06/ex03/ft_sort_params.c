#include <unistd.h>

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

void	sort_function(char **str, int nb);

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	sort_function(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
		count++;
	write (1, str, count);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	sort_function(char **str, int nb)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < nb)
	{
		j = i + 1;
		while (j < nb)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				aux = str[i];
				str[i] = str[j];
				str[j] = aux;
			}
			j++;
		}
		i++;
	}
}
