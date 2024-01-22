/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 08:52:22 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/07 14:40:08 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("O factorial de -1: %d \n", ft_recursive_factorial(-1));
	printf("O factorial de 0: %d \n", ft_recursive_factorial(0));
	printf("O factorial de 1: %d \n", ft_recursive_factorial(1));
	printf("O factorial de 2: %d \n", ft_recursive_factorial(2));
	printf("O factorial de 3: %d \n", ft_recursive_factorial(3));
	printf("O factorial de 5: %d \n", ft_recursive_factorial(5));
	printf("O factorial de 6: %d \n", ft_recursive_factorial(6));
	printf("O factorial de 7: %d \n", ft_recursive_factorial(7));
}*/
