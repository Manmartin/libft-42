/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:04:58 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/09 13:46:32 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_str;

	if (!s)
		return ((char *)s);
	if ((size_t)start >= ft_strlen(s))
		len = 0;
	if (!(new_str = malloc(sizeof(char) * len + 1)))
		return (0);
	ft_strlcpy(new_str, &s[start], len + 1);
	return (new_str);
}
