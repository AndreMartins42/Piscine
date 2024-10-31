/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:32:05 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/04 16:00:15 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_primeira(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_putchar('/');
	if (x > 1)
	{
		x--;
		while (x > 1)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_meio_if(int x, int y)
{
	int	z;

	z = y - 2;
	while (z > 0 && x == 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
		z--;
	}
}

void	ft_meio(int x, int y)
{
	int	recuperax;
	int	z;

	recuperax = x;
	if (y > 2)
	{
		z = y - 2;
		while (z > 0 && x > 1)
		{
			ft_putchar('*');
			x = recuperax;
			while (x != 2) // diferente de 2, pois é necessário mais de 2 colunas para imprimir o *
			{
				ft_putchar(' ');
				x--;
			}
			ft_putchar('*');
			z--;
			ft_putchar('\n');
		}
	}
}

void	ft_ultima(int x, int y)
{
	int	recuperax;

	recuperax = x;
	if (x > 0 && y > 1)
	{
		ft_putchar('\\');
		x--;
		while (x > 1)
		{
			ft_putchar('*');
			x--;
		}
		x = recuperax;
		if (x > 1)
		{
			ft_putchar('/'); // se não tiver, imprime 2 barras no final quando possuir 1 única coluna!
		}
	}
	if (y > 1)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_primeira(x, y);
	ft_meio_if(x, y);
	ft_meio(x, y);
	ft_ultima(x, y);
}

void	rush(int x, int y);

int	main(void)
{
	rush(123, 42);
	return (0);
}


