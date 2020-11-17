/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:21:43 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 17:53:19 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 || !s2)
		return ((void*)0);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (tmp == (void*)0)
		return ((void*)0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		tmp[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	tmp[i] = '\0';
	return (tmp);
}
