char	ft_toupper(char c)
{
	if (c <= 122 && c >= 97)
		return(c - 32);
	return (c);
}
