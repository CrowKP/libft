void	*ft_memmove(void *des, const void *src, unsigned int n)
{
  char	*d = des;
  const char	*s = src;
  
  if (d < s)
    while (n--)
      *d++ = *s++;
  else
    {
      const char	*lasts = s + (n-1);
      char	*lastd = d + (n-1);
      while (n--)
	*lastd-- = *lasts--;
    }
  return des;
}
