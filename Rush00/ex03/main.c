/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:38:17 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/19 01:48:20 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush03(int x, int y);

int	main(void)
{
	rush03 (-1, 1);
	ft_putchar('\n');
	rush03 (-1, -1);
	ft_putchar('\n');
	rush03 (1, -1);
	ft_putchar('\n');
	rush03 (5, 3);
	ft_putchar('\n');
	rush03 (5, 1);
	ft_putchar('\n');
	rush03 (1, 1);
	ft_putchar('\n');
	rush03 (1, 5);
	ft_putchar('\n');
	rush03 (4, 4);
	ft_putchar('\n');
	rush03 (2, 2);
	ft_putchar('\n');
	rush03 (3, 3);
	ft_putchar('\n');
	rush03 (2, 3);
	ft_putchar('\n');
	rush03 (3, 2);
	ft_putchar('\n');
	return (0);
}
