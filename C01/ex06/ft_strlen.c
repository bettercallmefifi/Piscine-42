#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }
    return(len);
}

int main()
{
    char str[] = "My name's ferdaous";
    int len = ft_strlen(str);
    printf("%d",ft_strlen(str));
    return (0);
}