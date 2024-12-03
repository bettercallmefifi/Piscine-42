#include <stdio.h>

char	 *ft_strupcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return(str);
}

int main()
{
	char str[] = "ferdaous";
	printf("%s\n",str);
	char *result =  ft_strupcase(str);
	printf("%s", result);
	return(0);
}
