void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_tmp;
	const char	*src_tmp;
	size_t		i;
	char		tmp[n];

	i = -1;
	dest_tmp = dest;
	src_tmp = src;

	if (!dest_tmp | !src_tmp)
		return ((void*)0);
	
	while (++i < n)
		tmp[i] = src_tmp[i];

	i = -1;
	while (tmp[++i])
		dest_tmp[i] = tmp[i];
}
