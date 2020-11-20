/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:53:38 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 14:54:04 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] && dstsize > i)
        i++;
    if (dstsize < i + 1)
        return (dstsize + ft_strlen(src));
    while (src[j])
    {
        if (dstsize > i + j + 1)
            dst[i + j] = src[j];
        j++;
    }
    if (dstsize > i + j + 1)
        dst[i + j] = '\0';
    else
        dst[dstsize - 1] = '\0';
    return (i + j);
}
