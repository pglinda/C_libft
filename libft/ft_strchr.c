/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:41:34 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/17 20:27:22 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	new_c;

	i = 0;
	new_c = (unsigned char) c;
	if (new_c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return ((char *) &(s[i]));
	}
	while (s[i] != '\0')
	{
		if (s[i] == new_c)
			return ((char *) &(s[i]));
		i++;
	}
	return (NULL);
}
