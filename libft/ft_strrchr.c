/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:57:26 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/07 08:38:23 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	new_c;

	i = ft_strlen(s) - 1;
	new_c = c;
	if (i < 0 && new_c == *s)
		return ((char *)s);
	if (new_c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return ((char *) &(s[i]));
	}
	while (i != -1)
	{
		if (s[i] == new_c)
			return ((char *) &(s[i]));
		i--;
	}
	return (NULL);
}
