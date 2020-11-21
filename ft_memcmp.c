/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:14:40 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 14:33:40 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t				i;
	const unsigned char	*arr1_tmp;
	const unsigned char	*arr2_tmp;

	i = 0;
	arr1_tmp = (const unsigned char*)arr1;
	arr2_tmp = (const unsigned char*)arr2;
	while (i < n)
	{
		if (arr1_tmp[i] == arr2_tmp[i])
			i++;
		else
			return (arr1_tmp[i] - arr2_tmp[i]);
	}
	return (0);
}
