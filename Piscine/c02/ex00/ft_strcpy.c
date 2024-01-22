/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:10:05 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/20 17:21:25 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[8] = "matador";
	char	dest[8] = "joao";

	printf("dest meu: %s\n", dest);
	printf("dest ori: %s\n", dest);
	printf("Minha: %s\n", ft_strcpy(dest, src));
	printf("Ori: %s\n", strcpy(dest, src));
}*/
