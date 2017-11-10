/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:48:01 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/10 15:02:27 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 == s2)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (n--)
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
			return ((unsigned char *)s1 - (unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
