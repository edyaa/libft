char	*ft_strchr(const void *str, int ch)
{
	const char	*src;
	int			i;
	
	src = str;
	i = 0;
	if (!src)
		return (NULL);

	while (src[i])
	{
		if (src[i] == ch)
			return ((char*)src + i);
		i++;
	}
	return (NULL);
}
