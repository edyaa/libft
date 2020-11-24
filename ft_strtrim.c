/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:13:23 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/24 16:40:42 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	if (!s1)
		return ((void*)0);
	i = 0;
	j = (int)ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j]) && j + 1 != 0 && j != 0)
		j--;
	if (j == 0)
		j = i;
	trim = (char*)malloc(sizeof(char) * (j - i + 2));
	if (!trim)
		return ((void*)0);
	trim[j - i + 1] = '\0';
	while (i - 1 < j)
	{
		trim[j - i] = s1[j];
		j--;
	}
	return (trim);
}
