/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:18:03 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 16:18:09 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	return (0);
}
