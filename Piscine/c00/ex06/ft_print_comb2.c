/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:22:47 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 11:30:09 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j < 100)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i < 98)
				write(1, ", ", 2);
		}
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
