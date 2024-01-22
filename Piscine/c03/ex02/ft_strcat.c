/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:58:33 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/27 08:27:13 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest); 
}

/*int	main(void)
{
	char dest[15] = "matador ";
	char src[5] = "sexy";
	char dest1[22] = "matador ";
	char src1[14] = "coisinha sexy";

	printf("Minha: %s\n", ft_strcat(dest, src));
	printf("Orig: %s\n", strcat(dest1, src1));
}*/
