/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:38:17 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/18 21:39:39 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush04(int x, int y);

int	main(void)
{
	rush04 (-1, 3);
	ft_putchar('\n');
	rush04 (-1, -1);
	ft_putchar('\n');
	rush04 (3, -1);
	ft_putchar('\n');
	rush04 (5, 3);
	ft_putchar('\n');
	rush04 (5, 1);
	ft_putchar('\n');
	rush04 (1, 1);
	ft_putchar('\n');
	rush04 (1, 5);
	ft_putchar('\n');
	rush04 (4, 4);
	ft_putchar('\n');
	rush04 (2, 2);
	ft_putchar('\n');
	rush04 (3, 3);
	ft_putchar('\n');
	rush04 (2, 3);
	ft_putchar('\n');
	rush04 (3, 2);
	ft_putchar('\n');
	return (0);
}
