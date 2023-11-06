/*

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <bsd/string.h>

strcmp(strchr("", '\0'), ft_strchr("", '\0')) == 0 ? printf("🍾") : printf("🤡");

//memcpy
#include <stdio.h>
#include <string.h>

int	main()
{
	size_t n = 2;
	char tab[10] = "ouqis";
	char tab2[10] = "J";
	memcpy(tab, tab2, n);
	printf("Pas moi:\n%s",tab2);
	printf("\n");
	ft_memcpy(tab, tab2, n);
	printf("Moi:\n%s",tab2);
}

//bzero
#include <stdio.h>
#include <string.h>

int	main()
{
	char tab[10];
	char tab2[10];
	bzero(tab, 3);
	ft_bzero(tab2, 3);
	printf("%s",tab);
	printf("\n");
	printf("%s", tab2);
}

// memset
#include <stdio.h>
#include <string.h>

int	main()
{
	char tab[10];
	char tab2[10];
	memset(tab, '*', 3);
	ft_memset(tab2, '-', 3);
	printf("%s",tab);
	printf("\n");
	printf("%s", tab2);
} */
	//Cast zero en void*
	//NULL
	/* int:
	if (!s1 || !s2)
		return -1;
	char:
		if (!s1 || !s2)
		return NULL;
	void:
		return ; 
/* #include <stdio.h>
#include <string.h>

int main () 
{
   char dest[] = "ab";
   //123456
   //abcdfgh
   // si dest <= src --> dest = dest jusqua n + src; 
   const char src[]  = "123456789";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 10);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);

   /*
#include <stdio.h>
int main()
{
    char s[] = "Salut c'est Ninho";
 	int start = 123;
    int len = 15;
 
    char* dest = ft_substr(s, start, len);
 
    printf("%s\n", dest);
 
    return 0;

int main()
{
	const char *s1 = "abcdefgh";
	const char *set = (void*)NULL;
	printf("%s", ft_strtrim(s1, set));
} */