/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:11:53 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/23 11:23:24 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "1241241562369";
	char	str1[] = "177695safasf124214";
	char	str2[] = "";

	printf("str: %d\n", ft_str_is_numeric(str));
	printf("str1: %d\n", ft_str_is_numeric(str1));
	printf("str2: %d\n", ft_str_is_numeric(str2));
}*/
