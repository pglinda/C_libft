/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:38:35 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/06 13:39:13 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	int		i;

	if (!dst && !src)
		return (NULL);
	s = (char *) src;
	d = dst;
	if (d < s)
	{
		return (ft_memcpy(d, s, len));
	}
	else
	{
		i = len - 1;
		while (i != -1)
		{
			d[i] = s[i];
			i--;
		}
		return (dst);
	}
}
