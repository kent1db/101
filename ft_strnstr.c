/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 01:20:06 by qrobert-          #+#    #+#             */
/*   Updated: 2017/11/09 02:08:47 by qrobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t a;
	size_t b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0' && n)
	{
		b = 0;
		while (to_find[b] == str[a + b] && (b < n))
		{
			b++;
			if (to_find[b] == '\0')
				return (str + a);
		}
		a++;
		n--;
	}
	return (0);
}
