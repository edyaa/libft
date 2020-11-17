/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:37:26 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:11:54 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	const char	*local_big;
	const char	*local_little;
	int			i;
	char		tmp[len];
	int			j;

	i = -1;
	local_big = big;
	local_little = little;
	if (local_big == (void*)0 || local_little == (void*)0)
		return ((void*)0);
}
