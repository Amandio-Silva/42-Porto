/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:00:20 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 11:22:17 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 47;
	while (++i < 56)
	{
		j = i;
		while (++j < 57)
		{
			k = j;
			while (++k < 58)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i < 55)
					write(1, ", ", 2);
			}
		}
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
