int		ft_isalnum(char c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65) ||
			(c >= 48 && c <= 57))
		return (8);
	return (0);
}
