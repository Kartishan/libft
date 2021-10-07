#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = b;
	while (len > 0)
	{
		*p++ = c;
		len--;
	}
	return (b);
}
/*int main()
{
	char b[5];
	b[3]='a';
	b[4]='\0';
	printf("%s",ft_memset(b,'c',3));
}*/