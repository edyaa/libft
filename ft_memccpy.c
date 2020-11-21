/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:10:50 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:52:42 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest_tmp;
	const unsigned char	*src_tmp;
	size_t				i;

	i = 0;
	dest_tmp = (unsigned char*)dest;
	src_tmp = (const unsigned char*)src;
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];
		if (src_tmp[i] == (unsigned char)c)
			return ((void*)(dest_tmp + i + 1));
		i++;
	}
	return ((void*)0);
}
