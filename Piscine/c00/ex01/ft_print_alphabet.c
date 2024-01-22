/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:22:42 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 09:25:35 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a < 123)
	{
		ft_putchar(a);
		a++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
}*/
