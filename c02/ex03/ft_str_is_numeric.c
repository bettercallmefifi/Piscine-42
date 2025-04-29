#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return(0);
		i++;
	}
	return(1);
}

int main()
{
	char str[] = "1234";
	char src[] = "09oj";
	char dest[] = "12344.34";

	printf("%d\n",ft_str_is_numeric(str));
	printf("%d\n",ft_str_is_numeric(src));
	printf("%d\n",ft_str_is_numeric(dest));

	return(0);
}
