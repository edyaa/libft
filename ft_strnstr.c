/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:37:26 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/22 13:49:43 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (i < len)
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[j] == haystack[i + j] && j + i < len && needle[j])
				j++;
			if (!needle[j])
				return ((char*)(haystack + i));
		}
		i++;
	}
	return ((void*)0);
}
