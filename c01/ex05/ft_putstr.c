#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}
int main()
{
	char str[] = "ferdaous el idrissi";
	ft_putstr(str);
	return(0);
}
