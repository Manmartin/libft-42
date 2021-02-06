/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manmarti <manmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:06:10 by manmarti          #+#    #+#             */
/*   Updated: 2021/02/04 12:42:04 by manmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long double sign;
	long double number;

	number = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
	*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str >= 48 && *str <= 57)
		number = number * 10 + (*str++ - '0');
	if (number * sign > 2147483647)
		return (-1);
	if (number * sign < -2147483648)
		return (0);
	return (number * sign);
}
