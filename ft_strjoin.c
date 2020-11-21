/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:21:43 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/21 13:25:39 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 || !s2)
		return ((void*)0);
	tmp = (char *)malloc(sizeof(char) * ((int)ft_strlen(s1) +\
				(int)ft_strlen(s2) + 1));
	if (tmp == (void*)0)
		return ((void*)0);
	i = 0;
	while (i < (int)ft_strlen(s1))
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < (int)ft_strlen(s2))
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
