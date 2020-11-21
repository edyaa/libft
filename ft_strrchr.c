/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:07:35 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 15:07:22 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*tmp;
	
	i = -1;
	tmp = 0;
	while (str[++i])
		if (str[i] == (unsigned char)ch)
			tmp = (char*)str + i;
	if (!(unsigned char)ch)
		return ((char *)str + i);
	return (tmp);
}
