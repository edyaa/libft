char	ft_tolower(char c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	return (c);
}
