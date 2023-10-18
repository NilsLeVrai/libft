












{
		
}



//
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
}