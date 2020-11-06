/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 03:17:16 by kblaze            #+#    #+#             */
/*   Updated: 2020/03/10 03:46:22 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	*finish;
	int		result;

	finish = s1 + n;
	result = 0;
	while (result == 0 && s1 != finish && (*s1 || *s2))
	{
		result = *s1 - *s2;
		s1++;
		s2++;
	}
	return (result);
}
