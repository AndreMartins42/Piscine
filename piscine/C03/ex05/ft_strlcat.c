/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:53:39 by anmendes          #+#    #+#             */
/*   Updated: 2024/08/10 09:34:45 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
		return (size + j);
	k = 0;
	while (src[k] && i < size - 1)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(src + k));
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main() {

    char src[] = "ola";
    char dest[] = "como esta?";
    
    int result = ft_strlcat(dest, src, 5);
	int cat = strlcat(dest, src, 5);
    printf("%i\n", result);
    printf("%i\n", cat);

    return 0;
}*/
