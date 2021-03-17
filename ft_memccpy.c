/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:49:57 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/09 12:58:18 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)src == (unsigned char)c)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			return (++dest);
		}
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	}
	return (0);
}
