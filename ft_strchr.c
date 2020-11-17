char	*ft_strchr(const void *str, int ch)
{
	const char	*src;
	int			i;
	
	src = str;
	i = 0;

	if (!src)
		return ((void*)0);

	while (src[i])
	{
		if (src[i] == ch)
			return ((char*)src + i);
		i++;
	}
	if (ch == 0)
		return ((char*)src + i);
	return ((void*)0);
}
