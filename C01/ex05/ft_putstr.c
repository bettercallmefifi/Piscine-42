#include <unistd.h>

void    ft_putstr(char *str)
{
    int len = 0;

    while(str[len] != '\0')
    {
        write(1,&str[len],1);
        len++;
    }
}

int main()
{
    char *str;
    str = "My name's ferdaous";
    ft_putstr(str);
    return(0);
}