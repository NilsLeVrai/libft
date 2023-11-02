/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:19:29 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/02 14:30:13 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#include <string.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t len_s = strlen(s);

    // Vérifier les cas spéciaux
    if (start >= len_s || len == 0) {
        return NULL;
    }

    // Ajuster la longueur si elle dépasse la fin de la chaîne
    if (len > len_s - start) {
        len = len_s - start;
    }

    // Allouer de la mémoire pour la nouvelle sous-chaîne
    char *p = (char *)malloc(sizeof(char) * (len + 1));
    if (!p) {
        return NULL; // Gestion de l'échec de l'allocation mémoire
    }

    // Copier les caractères de la chaîne d'entrée dans la nouvelle sous-chaîne
    size_t i = 0;
    while (len > 0 && s[start + i] != '\0') {
        p[i] = s[start + i];
        i++;
        len--;
    }

    // Terminer la nouvelle sous-chaîne
    p[i] = '\0';

    // Renvoyer la sous-chaîne résultante
    return p;
}

/*
src = Salut cest ninho; 16
start = 7;
len ;9
res: cest ninho; 9

int main()
{
    char s[] = "Salut c'est Ninho";
 	int start = 3;
    int len = 10;
 
    char* dest = ft_substr(s, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}*/
