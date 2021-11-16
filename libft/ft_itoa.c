/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pglinda <pglinda@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:44:06 by pglinda           #+#    #+#             */
/*   Updated: 2021/11/09 17:46:15 by pglinda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	ft_digit_counter(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = ft_digit_counter(n);
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (!n)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	result[len] = '\0';
	while (n)
	{
		result[--len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
