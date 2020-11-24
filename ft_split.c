/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:00:56 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/24 17:11:06 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			ft_count_sep(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static	int			ft_part_len(char const **s, char c)
{
	int		len;

	len = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	return (len);
}

static	char		**ft_free(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	char	**sep_arr;
	int		count_sep;
	int		part_len;
	int		i;

	if (!s)
		return ((void*)0);
	count_sep = (int)ft_count_sep(s, c);
	sep_arr = (char**)malloc(sizeof(*sep_arr) * (count_sep + 1));
	if (!sep_arr)
		return ((void*)0);
	i = 0;
	while (i < count_sep)
	{
		part_len = ft_part_len(&s, c);
		if (!(sep_arr[i] = (char*)malloc(sizeof(char) * (part_len + 1))))
			return (ft_free(sep_arr));
		ft_strlcpy(sep_arr[i], s, part_len + 1);
		s = s + part_len + 1;
		i++;
	}
	sep_arr[i] = ((void*)0);
	return (sep_arr);
}
