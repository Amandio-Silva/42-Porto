/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:46:21 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/24 14:08:50 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
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
	char	str[] = "asfasfasSAFASFWQRWQR";
	char	str1[] = "24safsafASF@$";

	printf("%d \n", ft_str_is_alpha(str));
	printf("%d \n", ft_str_is_alpha(str1));
}*/
