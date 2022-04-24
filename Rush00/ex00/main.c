/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:38:17 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/19 00:44:43 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush01(int x, int y);

int	main(void)
{
	rush01 (-1, 1);
	ft_putchar('\n');
	rush01 (-1, -1);
	ft_putchar('\n');
	rush01 (1, -1);
	ft_putchar('\n');
	rush01 (5, 3);
	ft_putchar('\n');
	rush01 (5, 1);
	ft_putchar('\n');
	rush01 (1, 1);
	ft_putchar('\n');
	rush01 (1, 5);
	ft_putchar('\n');
	rush01 (4, 4);
	ft_putchar('\n');
	rush01 (2, 2);
	ft_putchar('\n');
	rush01 (3, 3);
	ft_putchar('\n');
	rush01 (2, 3);
	ft_putchar('\n');
	rush01 (3, 2);
	ft_putchar('\n');
	return (0);
}
