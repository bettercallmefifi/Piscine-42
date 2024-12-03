// C program to demonstrate the basic usage of the strncpy() function

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(str[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int main()
{
    char str[] = "Hello, World!";
    char dest[20];
    ft_strncpy(dest, str, 9);
    dest[9] = '\0';
    printf("Destination string: %s\n", dest);

    return 0;
}
