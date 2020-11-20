/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:15:02 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 11:22:12 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char c;

	c = (char)ch;
	while (*str && *str != c)
		str++;
	if (*str == c)
		return ((char*)str);
	return ((void*)0);
}
