char *strncpy (char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (i <= n)
	{	
		if (src[i] == '\0')
		{	
			dest[i] = '\0';
			i++;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
