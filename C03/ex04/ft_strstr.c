#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	id;
	int	i;
	int	j;

	i = 0;
	j = 0;
	id = 0;
	while (to_find[id])
		id++;
	if (id == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j + 1 == id)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
