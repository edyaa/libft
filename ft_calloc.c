/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:24:23 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 17:01:40 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*tmp;
	int		i;

	tmp = malloc(num * size);
	if (tmp == (void*)0)
		return ((void*)0);
	i = -1;
	while (++i < size * num)
		tmp[i] = '\0';
	return (tmp);
}
