/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czambran <czambran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:52:35 by czambran          #+#    #+#             */
/*   Updated: 2019/12/05 00:53:19 by czambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (needle[0] == '\0')
		return (char*)(haystack);
	while (haystack[a])
	{
		while (haystack[a + b] == needle[b])
		{
			b++;
			if (needle[b] == '\0')
				return (char*)(&haystack[a]);
		}
		b = 0;
		a++;
	}
	return (0);
}
