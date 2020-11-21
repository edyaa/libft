/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:13:32 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 15:57:55 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_tmp;
	const char	*src_tmp;
	size_t		i;

	if (dest == src)
		return (dest);
	i = -1;
	dest_tmp = (char*)dest;
	src_tmp = (const char*)src;
	if (dest_tmp >= src_tmp)
	{
		printf("dest > src: Нет перекрытия!\n");
		while (n > ++i)
			dest_tmp[n - i - 1] = src_tmp[n - i - 1];
	}
	else
	{
		printf("dest < src: Перекрытие!\n");
		while (n > ++i)
			dest_tmp[i] = src_tmp[i];
	}
	return (dest_tmp);
}
