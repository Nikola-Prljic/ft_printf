#include <stdio.h>
#include "../ft_printf.h"
#include <limits.h>

int ft_printf_len(int i, char c)
{
	int len;

	len = 0;
	if(c == 'o')
		len = printf("ori len = %i", i);
	else
		len = printf("my len  = %i", i);
	return(len);
}

int	main(void)
{
	printf("----------## test case ##----------\n(%%s %%p %%s %%X %% 9 ft_printf = (void *)(-123) (char *)(0) 0)\n");
	ft_printf(" my len  = %i", ft_printf("\n%s %p %s %X %% 9", "ft_printf = ",(void *)(-123), (char *)(0), 0));
	printf(" ori len = %i",    printf("\n%s %p %s %X %% 9", "   printf = ",(void *)(-123), (char *)(0), 0));

	printf("\nori len = %i\n",    printf("\nzero %%X = %X",  0));
	ft_printf("my len  = %i\n", ft_printf("zero %%X = %X\n",  0));
	printf("%s","\n\n------## zero and 1% crash test ##-------\n");
	ft_printf(0);
	ft_printf("%");
	ft_printf("%s %", "[OK]");
	ft_printf("% %");
	ft_printf("%c", '%');
	ft_printf(" my  = %i", ft_printf("\n-1234 %%x = %x", -1234));
	printf(" ori = %i\n", printf("\n-1234 %%x = %x", -1234));

	ft_printf_len(ft_printf("\n%%i 0 = %i\n", 0), 'm');
	ft_printf_len(printf("\n%%i 0 = %i\n", 0), 'o');
	printf("\n\n");
	char *s = 0;
	ft_printf_len(ft_printf("\n%%s 0 = %s\n", s), 'm');
	ft_printf_len(printf("\n%%s 0 = %s\n", s), 'o');
	printf("\n\n");

	ft_printf_len(ft_printf("\n%%p NULL = %p\n", NULL), 'm');
	ft_printf_len(printf("\n%%p NULL = %p\n", NULL), 'o');
	printf("\n\n");

	printf(" len = %i\n", ft_printf("a%si%pp%%p%%%u", "123", s, INT_MAX - 1));
	printf(" len = %i", printf("a%si%pp%%p%%%u", "123", s, INT_MAX - 1));
	printf("\n\n");

	printf(" len = %i\n", ft_printf("%u", -11));
	printf(" len = %i", printf("%u", -11));
	printf("\n\n");

	char s1[] = "123";
	printf(" len = %i\n", ft_printf("%p", s1));
	printf(" len = %i", printf("%p", s1));
	printf("\n\n");

	//ft_printf(" %s%s%s");
}
