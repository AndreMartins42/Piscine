/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:55:06 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/03 13:29:55 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;
	int	div;
	int mod;

	a = 20;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %i, mod = %i", div, mod);
}*/
