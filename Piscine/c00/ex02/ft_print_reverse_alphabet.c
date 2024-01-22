/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:25:57 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 09:28:19 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 122;
	while (z > 96)
	{
		ft_putchar(z);
		z--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
}*/
