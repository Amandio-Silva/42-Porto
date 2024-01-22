/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:32:07 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/27 09:58:23 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "matador ";
	char	src[9] = "sexy boy";
	char	dest1[20] = "matador ";
	char	src1[20] = "sexy boy";
	unsigned int nb = 4;

	printf("%s \n", ft_strncat(dest, src, nb));
	printf("%s \n", strncat(dest1, src1, nb));	
}*/
