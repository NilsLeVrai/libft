#include<stdio.h>
#include"ft_tolower.c"
#include"ft_toupper.c"

void iterer(char* s, int (*ptr)(int))
{
	while (*s)
	{
		printf("%c", (*ptr)(*s));
		s++;
	}
	printf("\n");
}
int main()
{
	iterer("abcDEF'134 xyzWVU",&ft_tolower);
	iterer("abcDEF'134 xyzWVU",&ft_toupper);
	return 0;
}

