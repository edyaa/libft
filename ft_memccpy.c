void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_tmp;
	const char	*src_tmp;
	size_t		i;

	i = 0;
	dest_tmp = dest;
	src_tmp = src;
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];		
		if (src_tmp[i] == c)
			return (0);
		i++;
	}
}
