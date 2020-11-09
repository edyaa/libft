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

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*d;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	d = (char *)malloc((len + 1) * sizeof(char));
	if (d == 0)
		return (0);
	while (i < len)
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
