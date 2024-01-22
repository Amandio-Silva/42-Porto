/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:05:35 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/25 08:50:09 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
		{
			str[0] = str[0] - 32;
		}
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| ((str[i] > 90 && str[i] < 97)) || str[i] > 122)
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
