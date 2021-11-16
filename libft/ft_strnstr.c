/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:50:22 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/16 19:29:48 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		k = 0;
		while (haystack[i] == needle[k] && haystack[i] && needle[k] && i < len)
		{
			i++;
			k++;
		}
		if (!needle[k])
			return ((char *)&haystack[i - k]);
		i = i - k;
		i++;
	}
	return (NULL);
}
