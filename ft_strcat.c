/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czambran <czambran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:52:35 by czambran          #+#    #+#             */
/*   Updated: 2019/12/05 00:51:02 by czambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (s1[a])
		a += 1;
	while (s2[b])
	{
		s1[a] = s2[b];
		a += 1;
		b += 1;
	}
	s1[a] = '\0';
	return (s1);
}
