/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:48:51 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/13 10:48:55 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	j = nb;
	i = 1;
	while (i < power)
	{
		nb *= j;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main() {
  
    int result = ft_iterative_power(2, 4);
    printf("%i", result);

}*/
