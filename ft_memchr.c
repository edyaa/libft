void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*arr_tmp;
	size_t		i;

	i = 0;
	arr_tmp = arr;
	while (i < n)
	{
		if (*((char*)arr_tmp + i) == c)
			return ((char*)arr_tmp + i);
		i++;
	}
	return (NULL);
}
