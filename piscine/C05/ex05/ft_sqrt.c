/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:03:45 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/14 11:05:03 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	sqrt;

	x = 0;
	sqrt = 0;
	while (sqrt < nb)
	{
		x++;
		sqrt = x * x;
	}
	/*if (sqrt != nb)
		return (0);*/
	return (x);
}
#include <stdio.h>
int main() 
{

	printf("%i", ft_sqrt(81));
	return 0;
}
