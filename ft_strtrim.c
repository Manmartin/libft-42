/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:27:54 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/05 19:23:33 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int		ft_isin(const char letter, const char *keys)
{
	int i;

	i = 0;
	while (keys[i])
	{
		if (letter == keys[i++])
			return (1);
	}
	return (0);
}

static char		*clear_str(const char *str, int start, int end)
{
	char	*new_str;
	int		i;

	i = 0;
	if (end < 0)
	{
		new_str = malloc(sizeof(char));
		new_str[0] = '\0';
		return (new_str);
	}
	if (!(new_str = malloc(sizeof(char) * ((end - start) + 2))))
		return (0);
	while (start <= end)
		new_str[i++] = str[start++];
	new_str[i] = '\0';
	return (new_str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		first_char;
	int		last_char;
	int		i;
	char	*str;

	str = "";
	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i])
		i++;
	i--;
	while (i && ft_isin(s1[i], set))
		i--;
	last_char = (ft_isin(s1[0], set) && i == 0 ? -1 : i);
	i = 0;
	while (ft_isin(s1[i], set))
		i++;
	first_char = i;
	return (clear_str(s1, first_char, last_char));
}
