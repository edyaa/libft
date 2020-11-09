void	ft_bzero(void *array, int n)
{
	char	*tmp;
	int		i;
	
	if (!tmp)
		return ((void*)0);
	tmp = array;
	i = 0;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
