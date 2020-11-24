/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:05:36 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/24 16:43:11 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return ((void*)0);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return ((void*)0);
	while (i < len && start <= (unsigned int)ft_strlen(s))
	{
		string[i] = s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}
