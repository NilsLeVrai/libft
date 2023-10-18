#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	
	i= 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	else
		return (s2[i] - s1[i]);
	i++;
	}
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



