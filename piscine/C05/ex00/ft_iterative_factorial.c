/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:50:18 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/14 10:58:35 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fat = 1;
	while (nb > 1)
	{
		fat *= nb;
		nb--;
	}
	return (fat);
}
/*
#include <stdio.h>
int main(void)
{
	int result;

	result = ft_iterative_factorial(10);
	printf("%i\n", result);
}*/
