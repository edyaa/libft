#include <stdio.h>


void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	arr_tmp;
	size_t		i;
	int			flag;

	i = 0;
	flag = 0;
	arr_tmp = arr;
	while (i < n)
	{
		if (arr_tmp[i] != c)
		{
			flag++;
		}
		else
			break;
		i++;
	}
	if (flag == 0)
		return (NULL);
}

int		main(void)
{
	// Исходный массив
   unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = ft_memchr (src, '4', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);
	return (0);
}
