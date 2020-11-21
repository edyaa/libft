/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:16:52 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:47:03 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *array, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char*)array;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
