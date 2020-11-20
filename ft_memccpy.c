/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:10:50 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:12:31 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_tmp;
	const char	*src_tmp;
	size_t		i;

	i = 0;
	dest_tmp = dest;
	src_tmp = src;
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];
		if (src_tmp[i] == c)
			return (0);
		i++;
	}
}
