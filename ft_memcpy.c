void	*ft_memcpy(void *array, const void *source, int n)
{
	char		*tmp;
	const char	*source_tmp;
	int			i;

	i = 0;
	tmp = array;
	source_tmp = source;
	while (i < n)
	{
		tmp[i] = source_tmp[i];
		i++;
	}
}
