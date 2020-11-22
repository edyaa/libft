/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 03:17:16 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/22 14:00:34 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*finish;
	int				result;

	finish = (unsigned char*)(s1 + n);
	result = 0;
	while (result == 0 && (unsigned char*)s1 != finish && (*s1 || *s2))
	{
		result = (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
	}
	return (result);
}
