/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:00:43 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/23 10:11:30 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); 

void	ft_print(int x, int esq, int meio, int dir)
{
	ft_putchar(esq);
	while (x > 2)
	{
		ft_putchar(meio);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(dir);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			ft_print(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			ft_print(x, 'C', 'B', 'A');
		}
	}
}
