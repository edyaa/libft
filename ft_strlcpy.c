/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:51:28 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 14:51:30 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize) {
    size_t i;

    i = -1;
    while (src[++i])
    {
        if (dstsize > i + 1)
            dst[i] = src[i];
    }
    if (dstsize > i + 1)
        dst[i] = '\0';
    else
        dst[size - 1] = '\0';
    return(i);
}