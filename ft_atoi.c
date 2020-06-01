/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czambran <czambran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:52:35 by czambran          #+#    #+#             */
/*   Updated: 2020/01/05 20:37:13 by czambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MIN_INT -2147483648
#define MAX_INT 2147483647

int			ft_atoi(const char *str)
{
	unsigned int	nb;
	int				i;
	int				is_negative;

	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	is_negative = 0;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = 1;
	i = 0;
	nb = 0;
	while (ft_isdigit(str[i]))
	{
		if (!is_negative && nb > (unsigned int)MAX_INT)
			return (-1);
		else if (nb > (unsigned int)MIN_INT)
			return (0);
		nb *= 10;
		nb += str[i++] & 0x0F;
	}
	return ((int)(is_negative ? -nb : nb));
}
