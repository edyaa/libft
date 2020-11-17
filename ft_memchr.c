/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:10:24 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:10:36 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*arr_tmp;
	size_t		i;

	i = 0;
	arr_tmp = arr;
	while (i < n)
	{
		if (*((char*)arr_tmp + i) == c)
			return ((char*)arr_tmp + i);
		i++;
	}
	return ((void*)0);
}
