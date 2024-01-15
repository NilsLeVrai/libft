/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:01:56 by niabraha          #+#    #+#             */
/*   Updated: 2024/01/15 17:10:48 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"
#include <stdio.h>

int	isalpha_tester()
{
    char str[128];
    int i = 0;
    while (i <= 127)
    {
        i = ft_isalpha(i) - isalpha(i);
        printf("%d\n", i);
        i++;
    }
}

int main()
{
    if (isalpha_tester())
    {
        printf("All tests passed\n");
    }
    printf("KO\n");
}

/*
while i < 128
    ajouter les valeurs a string
comparer
*/