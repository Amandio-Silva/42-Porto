/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:47:08 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/07 14:44:37 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("O 2 sera prime: %d\n", ft_is_prime(2));
	printf("O 3 sera prime: %d\n", ft_is_prime(3));
	printf("O 4 sera prime: %d\n", ft_is_prime(4));
	printf("O 5 sera prime: %d\n", ft_is_prime(5));
	printf("O 7 sera prime: %d\n", ft_is_prime(7));
	printf("O 11 sera prime: %d\n", ft_is_prime(11));
	printf("O 13 sera prime: %d\n", ft_is_prime(13));
	printf("O 15 sera prime: %d\n", ft_is_prime(15));
}*/
