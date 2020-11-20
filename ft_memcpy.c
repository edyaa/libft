/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:13:11 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:13:21 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *array, const void *source, size_t n)
{
	char		*tmp;
	const char	*source_tmp;
    size_t      i;

	i = 0;
	tmp = array;
	source_tmp = source;
	while (i < n)
	{
		tmp[i] = source_tmp[i];
		i++;
	}
}
