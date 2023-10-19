#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	
}
	
#include <string.h>
#include <stdio.h>
int main ()
{
	char *s1 = "ouais la team";	
	char *s2 = "oais la team";

	char *s3 = "Bad omdns";
	char *s4 = "Bzd omens";
	printf("Pas moi%d\n", strncmp(s1, s2, 6));
	printf("Moi%d\n", ft_strncmp(s1, s2, 6));
	printf("Pas moi%d\n", strncmp(s3, s4, 8));
	printf("Moi%d\n", ft_strncmp(s3, s4, 8));
}



