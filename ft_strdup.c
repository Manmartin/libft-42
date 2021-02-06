/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:08:31 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/04 11:24:27 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*pointer;

	i = 0;
	while (s1[i])
		i++;
	if (!(pointer = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = s1[i];
	return (pointer);
}
