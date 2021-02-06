/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:07:53 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/04 15:42:02 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_pow(long int n)
{
	int pow;

	pow = 1;
	while (n > 9)
	{
		n /= 10;
		pow *= 10;
	}
	return (pow);
}

void		ft_putnbr_fd(int nb, int fd)
{
	int			sign;
	int			pow;
	long int	n;

	sign = (nb < 0 ? -1 : 1);
	n = nb;
	n *= sign;
	pow = get_pow(n);
	if (sign < 0)
		ft_putchar_fd('-', fd);
	while (pow > 0)
	{
		ft_putchar_fd((n / pow) + '0', fd);
		n = n % pow;
		pow /= 10;
	}
}
