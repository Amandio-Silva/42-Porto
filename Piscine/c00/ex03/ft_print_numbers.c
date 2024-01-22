/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:28:47 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 09:43:26 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		ft_putchar(n);
		n++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
}*/
