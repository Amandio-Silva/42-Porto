/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:20:07 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/20 10:26:00 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a = 4;
	int	b = 2;
	
	printf("Antes da div de A: %d\nAntes de mod de B: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Div de A: %d\nMod de B: %d\n", a, b);
}*/
