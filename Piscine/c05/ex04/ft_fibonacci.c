/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:45:51 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/07 14:42:49 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(void)
{
	printf("O Fibo de 0: %d\n", ft_fibonacci(0));
	printf("O Fibo de 1: %d\n", ft_fibonacci(1));
	printf("O Fibo de 2: %d\n", ft_fibonacci(2));
	printf("O Fibo de 3: %d\n", ft_fibonacci(3));
	printf("O Fibo de 4: %d\n", ft_fibonacci(4));
	printf("O Fibo de 5: %d\n", ft_fibonacci(5));
	printf("O Fibo de 6: %d\n", ft_fibonacci(6));
	printf("O Fibo de 7: %d\n", ft_fibonacci(7));
}*/
