/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:16:35 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:25:13 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = array;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return ((void*)tmp);
}
