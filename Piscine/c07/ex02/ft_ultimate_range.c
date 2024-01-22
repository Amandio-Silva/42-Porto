/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:59:41 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/09 08:14:36 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*matrix;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	matrix = malloc(sizeof(int) * (max - min));
	if (!matrix)
		return (-1);
	i = 0;
	while (min < max)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	*range = matrix;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab ,min, max);
	printf("Tamanho: %d\n", size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
