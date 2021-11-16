/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:01:26 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/06 14:01:48 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *) src;
	d = dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i != (int) n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
