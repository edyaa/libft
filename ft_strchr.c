/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:15:02 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:15:55 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const void *str, int ch)
{
	const char	*src;
	int			i;

	src = str;
	i = 0;
	if (!src)
		return ((void*)0);
	while (src[i])
	{
		if (src[i] == ch)
			return ((char*)src + i);
		i++;
	}
	if (ch == 0)
		return ((char*)src + i);
	return ((void*)0);
}
