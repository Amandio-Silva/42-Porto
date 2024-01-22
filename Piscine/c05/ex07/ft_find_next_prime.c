/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 08:40:11 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/07 14:45:04 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = 2;
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*int     main(void)
{
        printf("O 2 sera o prime: %d\n", ft_find_next_prime(2));
        printf("O 3 sera prime: %d\n", ft_find_next_prime(3));
        printf("O 4 sera prime: %d\n", ft_find_next_prime(4));
        printf("O 5 sera prime: %d\n", ft_find_next_prime(5));
        printf("O 7 sera prime: %d\n", ft_find_next_prime(7));
        printf("O 11 sera prime: %d\n", ft_find_next_prime(11));
        printf("O 13 sera prime: %d\n", ft_find_next_prime(13));
        printf("O 15 sera prime: %d\n", ft_find_next_prime(15));
        printf("O 17 sera prime: %d\n", ft_find_next_prime(17));
        printf("O 18 sera prime: %d\n", ft_find_next_prime(18));
}*/
