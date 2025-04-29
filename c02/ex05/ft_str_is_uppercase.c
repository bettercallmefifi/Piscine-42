#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
			return(0);
		i++;
	}
	return(1);
}

int main()
{
	char str[] = "FERDOUS";
	char src[] = "FERdaous";
	char dst[] = "FER.DAOUS";

	printf("%d\n",ft_str_is_uppercase(str));
	printf("%d\n",ft_str_is_uppercase(src));
	printf("%d\n",ft_str_is_uppercase(dst));

	return(0);
}
