void	*ft_bzero(void *buf, int n)
{
	char	*p;

	p = buf;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
	return (p);
}
