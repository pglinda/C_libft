/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:00:22 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/07 10:01:12 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
