/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleal-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:07:57 by joleal-b          #+#    #+#             */
/*   Updated: 2023/07/20 10:14:17 by joleal-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 4;
	int	b = 2;
	int	div = 6;
	int	mod = 6;

	printf("Antes a: %d, b: %d, Div: %d, Mod: %d \n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);	
	printf("Depois a: %d, b: %d, Div: %d, Mod: %d \n", a, b, div, mod);
}*/
