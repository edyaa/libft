/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:24:23 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:18:07 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*tmp;
	int		i;

	tmp = malloc(num * size);
	if (tmp == (void*)0)
		return ((void*)0);
	i = -1;
	while (++i < (int)size * (int)num)
		tmp[i] = 0;
	return (tmp);
}
