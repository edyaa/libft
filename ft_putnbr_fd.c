/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:13:56 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/20 16:18:29 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	arr[15];

	len = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-');
		n *= -1;
	}
	while (n > 0)
	{
		arr[len++] = n % 10 + '0';
		n /= 10;
	}
	while (--len >= 0)
		ft_putchar_fd(arr[len], fd);
}
