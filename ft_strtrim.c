/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:13:23 by kblaze            #+#    #+#             */
/*   Updated: 2020/11/17 18:44:33 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*tmp;
	int		end_index;

	i  = ft_strlen(set);
	while (s1[i] == set[i])
		i--;
	if (i != 0)
		return (s1);
	i = ft_strlen(s1) - ft_strlen(set);
	end_index = i;
	while (s1[i] == set[i])
		i++;
	if (i != ft_strlen(s1))
		return (s1);
	tmp = (char *)malloc(ft_strlen(s1) - 2 * ft_strlen(set) + 1);
	if (!tmp)
		return ((void*)0);
	i = ft_strlen(set) - 1;
	while (++i < end_index)
		tmp[i] = s1[i];
	return (tmp);
}

int		main(void)
{
	char *test = "taesta";
	char *set  = "ta";

	printf("String: %s\n", test);
	printf("Set: %s\n", set);
	printf("Function: %s\n", ft_strtrim(test, set));
	return (0);
}
