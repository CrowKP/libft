void	*ft_memchr(const void *str, int c, unsigned int n)
{
  const unsigned char *src;

  src = str;
  while (n > 0)
    {
      if (*src == c)
	return (void*)src;
      src++;
      n--;
    }
  return (0);
}
