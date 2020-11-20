/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:09:42 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 16:46:01 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	if (!s || !f)
		return ((void*)0);
	map = (char*)malloc(sizeof(char) * ((int)ft_strlen(s) + 1));
	if (!map)
		return ((void*)0);
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		map[i] = f((unsigned int)i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
