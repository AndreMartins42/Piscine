/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:20:26 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/14 17:20:30 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	true;

	i = 0;
	true = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && true == 0)
		{
			str[i] -= 32;
			true = 1;
		}
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			true = 0;
		if (str[i] >= '0' && str[i] <= '9')
			true = 1;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char s[] = "ola, tudo Bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	
	ft_strcapitalize(s);
	
	printf("%s", s);
}*/
