/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:36:33 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/07 08:54:53 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return (NULL);
	if (c == '\0')
	{
		while (str[i] != '\0' && (i < (int) n))
			i++;
		if (str[i] == '\0')
			return ((char *) &(str[i]));
		else
			return (NULL);
	}
	while (i < (int) n)
	{
		if (str[i] == (char) c)
			return ((char *) &(str[i]));
		i++;
	}
	return (NULL);
}
