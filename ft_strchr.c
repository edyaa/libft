#include <stdio.h>

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

int main (void)
{
   // Массив со строкой для поиска
   char src [11]="0123456789";
   // Код искомого символа
   int ch = '6';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;

   // Ищем символ ‘6’
   printf("Answer: %s\n", ft_strchr (src, 0));

   // Выводим результат на консоль
   return 0;
}
