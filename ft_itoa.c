/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:32:19 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/22 17:46:38 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			ft_nn(int n)
{
	int		nn;

	nn = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		nn++;
		n = -1 * n;
	}
	while (n != 0)
	{
		n = n / 10;
		nn++;
	}
	return (nn);
}

static	int			check_last_int(char *str, int n)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	return (n);
}

char				*ft_itoa(int n)
{
	int		nn;
	char	*str;

	nn = ft_nn(n);
	str = (char *)malloc(sizeof(char) * (nn + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[nn - 1] = '0';
	str[nn] = '\0';
	n = check_last_int(str, n);
	if (n < 0)
	{
		str[0] = '-';
		n = -1 * n;
	}
	while (n != 0)
	{
		str[nn - 1] = n % 10 + '0';
		n /= 10;
		nn--;
	}
	return (str);
}
