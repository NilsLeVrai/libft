/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:01:56 by niabraha          #+#    #+#             */
/*   Updated: 2024/01/15 17:09:06 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"
#include <stdio.h>

int	isalpha_tester()
{
    char c = 0;
    int i = 0;
    while (i <= 127)
    {
        i = ft_isalpha(c) - isalpha(c);
        printf("%d\n", i);
        c++;
        i++;
    }
}

int main()
{
    if (isalpha_tester())
    {
        printf("All tests passed\n");
        break;
    }
    printf("KO\n");
}

/*
while i < 128
    ajouter les valeurs a string
comparer
*/