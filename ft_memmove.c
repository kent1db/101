/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:35:20 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/10 13:43:21 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (i < n)
	{
		tmp[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (tmp[i] != '\0')
	{
		((char *)dst)[i] = tmp[i];
		i++;
	}
	return (dst);
}
