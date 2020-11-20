/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 13:42:14 by kblaze            #+#    #+#             */
/*   Updated: 2020/03/12 16:25:39 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*d;

	i = 0;
	len = (int)ft_strlen(src);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
		return ((void*)0);
	while (i < len)
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
