char	*ft_strrchr(const char *str, int ch)
{
	int			i;
	const char	*src;
	char		*tmp;
	
	i = 0;
	src = str;

	if (!src)
		return (NULL);
	
	while (src[i])
	{
		if (src[i] == ch)
			tmp = (char*)src + i;
		i++;
	}
	
	if (!tmp)
		return (NULL);
	return (tmp);
}
