/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knascime <knascime@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:14:44 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/19 02:34:09 by knascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 42
#define FALSE 0

void	ft_putchar(char c);
void	put_line(int x, char border, char center);
int		is_top(int pos_y);
int		is_bottom(int y, int pos_y);

void	rush02(int x, int y)
{
	int	pos_y;

	pos_y = 1;
	if (x >= 1)
	{
		while (pos_y <= y)
		{
			if (is_top(pos_y))
				put_line(x, 'A', 'B');
			else
			{
				if (is_bottom(y, pos_y))
					put_line(x, 'C', 'B');
				else
					put_line(x, 'B', ' ');
			}
			ft_putchar('\n');
			pos_y++;
		}
	}
}

void	put_line(int x, char border, char center)
{
	int	pos_x;

	pos_x = 1;
	while (pos_x <= x)
	{
		if (pos_x == 1)
			ft_putchar(border);
		else
		{
			if (pos_x == x)
				ft_putchar(border);
			else
				ft_putchar(center);
		}
		pos_x++;
	}
}

int	is_top(int pos_y)
{
	if (pos_y == 1)
		return (TRUE);
	return (FALSE);
}

int	is_bottom(int y, int pos_y)
{
	if (y > 1)
		if (pos_y == y)
			return (TRUE);
	return (FALSE);
}
