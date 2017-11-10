/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:49:35 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/10 14:47:28 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	{
		size_t i;

		i = 0;
		while (i < n)
		{
			if (((unsigned char *)s)[i] == (unsigned char)c)
				return ((void *)(s + i));
			i++;
		}
		return (NULL);
	}
}
