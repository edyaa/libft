/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:05:36 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 17:53:59 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	int		i;

	i = 0;
	if (!s)
		return ((void*)0);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == (void*)0)
		return (0);
	while (i < len)
	{
		string[i] = s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}
