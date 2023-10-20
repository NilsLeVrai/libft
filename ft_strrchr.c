/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:07:12 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/20 11:37:00 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	unsigned char	char_find;
	size_t	len;

	char_find = (unsigned char) c;
	i = 0;
	len = ft_strlen(s);
	while (i < (unsigned int) len)
	{
		if (s[i] == char_find)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}

#include <stdlib.h>
#include <string.h>
int main() 
{
    /* const char *src = "Bad omens";
    char *dest;
    char *ptr;
 
    dest = (char *) malloc(sizeof(char) * (ft_strlen(src)+1) );
    strcpy(dest, src);
    while (((ptr) = strchr(dest, 'a')))
        *ptr = 'I';
    printf( "Result : %s\n", dest);   
    return 0; */
	//strcmp(strrchr("oui", '\0'), ft_strrchr("oui", '\0')) == 0 ? printf("🍾") : printf("🤡");
	printf("Pas moi: :( \n%s", strrchr("oiuais", 'i'));
	printf("\n");
	printf("Moi: :)\n%s", ft_strrchr("oiuais", 'i'));

}
