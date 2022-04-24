/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 03:38:17 by tcarvalh          #+#    #+#             */
/*   Updated: 2021/07/19 01:35:34 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush02(int x, int y);

int	main(void)
{
	rush02 (-1, 1);
	ft_putchar('\n');
	rush02 (-1, -1);
	ft_putchar('\n');
	rush02 (1, -1);
	ft_putchar('\n');
	rush02 (5, 3);
	ft_putchar('\n');
	rush02 (5, 1);
	ft_putchar('\n');
	rush02 (1, 1);
	ft_putchar('\n');
	rush02 (1, 5);
	ft_putchar('\n');
	rush02 (4, 4);
	ft_putchar('\n');
	rush02 (2, 2);
	ft_putchar('\n');
	rush02 (3, 3);
	ft_putchar('\n');
	rush02 (2, 3);
	ft_putchar('\n');
	rush02 (3, 2);
	ft_putchar('\n');
	return (0);
}
