/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:35:20 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/10 15:56:39 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char tmp[n];

	ft_memcpy(tmp, src, n);
	ft_memcpy(dst, tmp, n);	
	return (dst);
}
