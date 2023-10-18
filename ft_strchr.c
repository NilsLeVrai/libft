#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strchr(const char *s, int c)
{
	unsigned int		i;
	unsigned char	char_find;

	char_find = (unsigned char) c;
	i = 0;
	while (i <= (unsigned int)ft_strlen(s))
	{
		if (s[i] == char_find)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    const char *src = "Bad omens";
    char *dest;
    char *ptr;
 
    dest = (char *) malloc(sizeof(char) * (ft_strlen(src)+1) );
    strcpy(dest, src);
    while (ptr = strchr(dest, 'a')) 
        *ptr = 'I';
    printf( "Result : %s\n", dest);   
    return 0;
}
