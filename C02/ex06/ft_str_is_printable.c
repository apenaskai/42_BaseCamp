int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\0')
			return (1);
		else if (str[i] < ' ' || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}
