/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:02:40 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/27 07:58:05 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[8] = "matAdor";
	char	s2[8] = "matador";
	const	char s3[8] = "matAdor";
	const	char s4[8] = "matador";
	unsigned int n = 4;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s3, s4, n));
}*/
