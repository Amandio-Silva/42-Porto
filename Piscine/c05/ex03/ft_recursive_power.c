/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:05:40 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/02 14:43:22 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

/*int	main(void)
{
	printf("Power 0 ^ 0: %d\n", ft_recursive_power(0, 0));
	printf("Power 2 ^ 1: %d\n", ft_recursive_power(2, 1));
	printf("Power 4 ^ 2: %d\n", ft_recursive_power(4, 2));
	printf("Power 5 ^ 3: %d\n", ft_recursive_power(5, 3));
	printf("Power 7 ^ 4: %d\n", ft_recursive_power(7, 4));
}*/
