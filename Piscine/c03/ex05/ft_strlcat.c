/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:57:25 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/31 10:32:20 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a] != '\0')
		a++;
	while (src[res] != '\0')
		res++;
	if (size <= a)
		res = res + size;
	else
		res = res + a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}

/*int	main(void)
{
	char	dest[] = "matador ";
	char	src[] = "sexy";
	unsigned int size = 5;

	printf("Minha: %d \n", ft_strlcat(dest, src, size));
}*/
