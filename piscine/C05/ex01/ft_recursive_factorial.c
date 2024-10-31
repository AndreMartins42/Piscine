/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:50:18 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/12 15:32:17 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		res = ft_recursive_factorial(nb - 1) * nb;
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	int result; 
	result = ft_recursive_factorial(6);
	printf("%i\n", result);
}*/
