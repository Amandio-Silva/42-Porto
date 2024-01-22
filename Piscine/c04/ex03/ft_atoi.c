/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 08:09:32 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/28 08:26:10 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;	

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] > 7 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("---+--+1234ab567"));
}*/
