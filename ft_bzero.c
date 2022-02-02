void	ft_bzero(void *str, unsigned int n)
{
  unsigned char *ptr;

  ptr = str;
  while(n > 0)
    {
      *ptr++ = '\0';
      n--;
    }
}
