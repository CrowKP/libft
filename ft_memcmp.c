int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
  const unsigned char *s1;
  const unsigned char *s2;

  s1 = str1;
  s2 = str2;
  while (n > 0)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1++;
      s2++;
      n--;
    }
  return (0);
}
