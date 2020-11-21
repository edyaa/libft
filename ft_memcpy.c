/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:13:11 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:21:46 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *array, const void *source, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	if (array == source)
		return (array);
	i = 0;
	dest = array;
	src = source;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
