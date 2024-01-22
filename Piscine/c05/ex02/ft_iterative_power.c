/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:45:39 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/07 14:40:54 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (0 < power)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/*int	main(void)
{
	printf("power de 4 ^ 2: %d\n", ft_iterative_power(4, 2));
	printf("power de 3 ^ 2: %d\n", ft_iterative_power(3, 2));
	printf("power de 2 ^ 4: %d\n", ft_iterative_power(2, 4));
	printf("power de 5 ^ 2: %d\n", ft_iterative_power(5, 2));
}*/
