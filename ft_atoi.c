/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:01:46 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 10:44:14 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int j;
	int result;
	int i;

	j = 0;
	i = 1;
	result = 0;
	while (str[j] == '\n' || str[j] == '\t' || str[j] == ' ' || \
			str[j] == '\r' || str[j] == '\v' || str[j] == '\f')
		j++;
	if (str[j] == '-')
	{
		i = -1;
		j++;
	}
	else if (str[j] == '+')
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		result = result * 10 + str[j] - '0';
		j++;
	}
	return (result * i);
}
