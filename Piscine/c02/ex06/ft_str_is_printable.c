/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:43:39 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/24 12:04:55 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
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
	char	str[] = "SFasfasfasfg215125";
	char	str1[] = "SFasfas\nfasfg215125";
	char	str2[] = "";
	char	str3[] = "S214124142Fasfasfas15125";
	char	str4[] = "i^$$&$&SFasfasfasfg215125";

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
}*/
