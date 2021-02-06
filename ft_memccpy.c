/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menccopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:49:57 by manmarti          #+#    #+#             */
/*   Updated: 2021/01/25 16:45:28 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src++;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			return (++dest);
		}
	}
	return (0);
}
