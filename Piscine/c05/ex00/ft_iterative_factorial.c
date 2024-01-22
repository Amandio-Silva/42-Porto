/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:58:32 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/31 14:27:30 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*int	main(void)
{
	printf("Factorial de 0: %d\n", ft_iterative_factorial(0));
	printf("Factorial de 1: %d\n", ft_iterative_factorial(1));
	printf("Factorial de 2: %d\n", ft_iterative_factorial(2));
	printf("Factorial de 4: %d\n", ft_iterative_factorial(4));
	printf("Factorial de 6: %d\n", ft_iterative_factorial(6));
	printf("Factorial de -1: %d\n", ft_iterative_factorial(-1));
}*/
