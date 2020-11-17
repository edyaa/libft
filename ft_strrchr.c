/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:07:35 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:08:58 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	int			i;
	const char	*src;
	char		*tmp;

	i = 0;
	src = str;
	if (!src)
		return ((void*)0);
	while (src[i])
	{
		if (src[i] == ch)
			tmp = (char*)src + i;
		i++;
	}
	if (!tmp)
		return ((void*)0);
	return (tmp);
}
