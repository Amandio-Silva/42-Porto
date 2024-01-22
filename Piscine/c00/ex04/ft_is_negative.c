/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:54:37 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/19 10:59:45 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
		ft_putchar('P');
}

/*int	main(void)
{
	int	p;
	int	n;
	int	nu;

	p = 2;
	n = -1;
	nu = 0;

	ft_is_negative(p);
	ft_putchar('\n');
	ft_is_negative(n);
	ft_putchar('\n');
	ft_is_negative(nu);
	ft_putchar('\n');
}*/
