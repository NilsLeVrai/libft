
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] == s2[i] && i < n)
    {
        if (n == 0)
            return (0);
        i++;
    }
    return (s1[i] - s2[i]);
}

int main ()
{
    int res;
    size_t  i;
    char tab[20] = "ouais la team";
    char tab2[20] = "ouais la team";
    i = 0;
    res = strncmp(tab, tab2, i);
    printf("Pas moi :( %d\n", res);
    res = ft_strncmp(tab, tab2, i);
    printf("Moi :) %d", res);
}