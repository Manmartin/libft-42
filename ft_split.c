/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:51:08 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/01 16:23:23 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_chrcount(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (*(s + j) == c)
		{
			*(s + j) = 0;
			i++;
		}
		j++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**buff;
	char	*aux;
	int		i;
	int		j;

	j = 0;
	if (!(aux = malloc(sizeof(char) * ft_strlen(s))))
		return (0);
	aux = (char *)s;
	i = ft_chrcount(aux, c) + 2;
	if (!(buff = (char **)malloc(sizeof(char *) * i)))
		return (0);
	while (j < i)
	{
		if (!(buff[j] = malloc(sizeof(char *) * ft_strlen((const char *)aux))))
			return (0);
		ft_strlcpy(buff[j++], aux, ft_strlen((const char *)aux) - 1);
		while (*aux)
			aux++;
		aux++;
	}
	buff[j] = 0;
	free(aux);
	return (buff);
}
