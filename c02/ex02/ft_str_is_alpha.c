#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return(0);
		i++;
	}
	return(1);

}

int main()
{
	char str[] = "ferdaous";
	char dest[] = "ha7jar";
	char ves[] = "hk./";
	printf("%d\n",ft_str_is_alpha(str));
	printf("%d\n",ft_str_is_alpha(dest));
	printf("%d\n",ft_str_is_alpha(ves));
	return(0);
}

