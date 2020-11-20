/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:14:40 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:14:49 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t		i;
	const char	*arr1_tmp;
	const char	*arr2_tmp;

	i = 0;
	arr1_tmp = arr1;
	arr2_tmp = arr2;
	while (i < n)
	{
		if (arr1_tmp[i] == arr2_tmp[i])
			i++;
		else
			return (arr1_tmp[i] - arr2_tmp[i]);
	}
	return (0);
}
