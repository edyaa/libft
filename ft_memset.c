void	*ft_memset(void *array, int c, int n)
{
	int		i;
	char	*tmp;

	tmp = array;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
}
