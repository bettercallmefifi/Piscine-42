#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while( i < n)
	{
		dest[i] = '\0';
		i++;
	}
return(dest);
}

int main()
{
	 char str[] = "ferdaous el idrissi <3";
	 char dest[20];
	 printf("%s",ft_strncpy(dest,str,7));
	 return(0);
}
