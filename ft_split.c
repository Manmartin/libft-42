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

static int        ft_wordcount(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
		{
			i++;
			while (s[j] == c)
				s[j++] = 0;
		}
		j++;
	}
	return (i);
}

char            **ft_split(char const *s, char c)
{
	char    **buff;
	char    *aux;
	char    *aux_aux;
	int        i;
	int        j;

  
	if (!(aux = malloc(sizeof(char) * (j = 1 + ft_strlen(s)))))
		return (0);
	aux_aux = aux;
	ft_strlcpy(aux, s, j);
	ft_strtrim(aux, c);
	i = ft_wordcount(aux, c) + 2;
	j = 0;
	if (!(buff = (char **)malloc(sizeof(char *) * i)))
		return (0);
	while (j < i - 1)
	{
		while (!*aux)
			aux++;
		if (!(buff[j] = malloc(sizeof(char) * (ft_strlen(aux) + 1))))
			return (0);
		ft_strlcpy(buff[j++], aux, ft_strlen(aux) + 1);
		while (*aux)
		  aux++;
		aux++;
		
	}
	buff[j] = 0;
	free(aux_aux);
	return (buff);
}

int main()
{
	printf("%s",ft_split("Hello world", " ")[1]);
}