/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_ascii_unicode.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czambran <czambran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:52:35 by czambran          #+#    #+#             */
/*   Updated: 2019/12/05 00:50:17 by czambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
}

static void	print_uc_two_byte(int c, int fd)
{
	unsigned char x[2];

	x[0] = 192 | ((1984 & c) >> 6);
	x[1] = 128 | (63 & c);
	write(fd, x, 2);
}

static void	print_uc_three_byte(int c, int fd)
{
	unsigned char	x[3];

	x[0] = 224 | ((61440 & c) >> 12);
	x[1] = 128 | ((4032 & c) >> 6);
	x[2] = 128 | (63 & c);
	write(fd, x, 3);
}

static void	print_uc_four_byte(int c, int fd)
{
	unsigned char x[4];

	x[0] = 240 | ((1835008 & c) >> 18);
	x[1] = 128 | ((258048 & c) >> 12);
	x[2] = 128 | ((4032 & c) >> 6);
	x[3] = 128 | (63 & c);
	write(fd, x, 4);
}

void		ft_putchar_fd_ascii_unicode(int c, int fd)
{
	if (c <= 127 && c >= 0)
		int_putchar_fd(c, fd);
	if (c > 127 && c < 2047)
		print_uc_two_byte(c, fd);
	if (c > 2047 && c < 65535)
		print_uc_three_byte(c, fd);
	if (c > 65536 && c < 1112064)
		print_uc_four_byte(c, fd);
}
