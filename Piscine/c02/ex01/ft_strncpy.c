/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:24:48 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/21 09:45:40 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "matador";
	char	dest[] = "joao";
	unsigned int	n = 8;

	char    src2[] = "matador";	
	char	dest2[] = "joao";
	unsigned int	n2 = 8;

	printf("Meu: %s \n", ft_strncpy(dest, src, n));
	printf("Original: %s \n", strncpy(dest2, src2, n2));
}*/
