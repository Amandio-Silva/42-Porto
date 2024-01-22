/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:32:36 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/03 11:46:38 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int	main(void)
{
	printf("Raiz de 0: %d\n", ft_sqrt(0));
	printf("Raiz de 1: %d\n", ft_sqrt(1));
	printf("Raiz de 3: %d\n", ft_sqrt(3));
	printf("Raiz de 4: %d\n", ft_sqrt(4));
	printf("Raiz de 6: %d\n", ft_sqrt(6));
	printf("Raiz de 8: %d\n", ft_sqrt(8));
	printf("Raiz de 9: %d\n", ft_sqrt(9));
	printf("Raiz de 10: %d\n", ft_sqrt(10));
	printf("Raiz de 12: %d\n", ft_sqrt(12));
}*/
