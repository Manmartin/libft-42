/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:04:58 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/04 15:27:17 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;

	if (!s && !start)
		return ((char *)s);
	if (!(new_str = malloc(sizeof(char) * len + 1)))
		return (0);
	if (start >= len)
		len = 0;
	ft_memcpy(new_str, &s[start], len);
	new_str[len] = '\0';
	return (new_str);
}
