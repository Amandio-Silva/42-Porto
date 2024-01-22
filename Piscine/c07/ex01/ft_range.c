/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 07:52:06 by joleal-b          #+#    #+#             */
/*   Updated: 2023/08/09 07:59:32 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	matrix = (int *)malloc(sizeof(int) * (size + 1));
	if (!matrix)
		return (NULL);
	while (i < size)
	{
		matrix[i] = min;
		i++;
		min++;
	}
	return (matrix);
}

/*int	main(void)
{
	int	min = -14;
	int	max = 20;
	int	size = max - min;
	int	i = 0;
	int	*a = ft_range(min, max);

	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}*/
