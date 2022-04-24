/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:14:44 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/19 02:01:59 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 42
#define FALSE 0

void	ft_putchar(char c);
int		is_node_left(int y, int pos_x, int pos_y);
int		is_node_right(int x, int y, int pos_x, int pos_y);
int		is_center(int x, int y, int pos_x, int pos_y);

void	rush03(int x, int y)
{
	int	pos_x;
	int	pos_y;

	pos_x = 1;
	pos_y = 1;
	if (pos_x >= 1)
	{
		while (pos_y <= y)
		{
			while (pos_x <= x)
			{
				if (is_node_left(y, pos_x, pos_y))
					ft_putchar('A');
				else if (is_node_right(x, y, pos_x, pos_y))
					ft_putchar('C');
				else if (is_center(x, y, pos_x, pos_y))
					ft_putchar(' ');
				else
					ft_putchar('B');
				pos_x++;
			}			
			ft_putchar('\n');
			pos_y++;
			pos_x = 1;
		}
	}
}

int	is_node_left(int y, int pos_x, int pos_y)
{
	if (pos_x == 1)
		if (pos_y == 1)
			return (TRUE);
	if (pos_x == 1)
		if (pos_y == y)
			return (TRUE);
	return (FALSE);
}

int	is_node_right(int x, int y, int pos_x, int pos_y)
{
	if (x > 1)
	{
		if (y > 1)
		{
			if (pos_x == x)
			{
				if (pos_y == 1)
					return (TRUE);
			}
			if (pos_x == x)
			{
				if (pos_y == y)
					return (TRUE);
			}
		}
	}
	return (FALSE);
}

int	is_center(int x, int y, int pos_x, int pos_y)
{
	if (pos_x > 1)
		if (pos_x < x)
			if (pos_y > 1)
				if (pos_y < y)
					return (TRUE);
	return (FALSE);
}
