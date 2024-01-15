/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:01:56 by niabraha          #+#    #+#             */
/*   Updated: 2024/01/15 15:33:19 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"
#include <stdio.h>

int	isalpha_tester(char c)
{
    int     i = 0;
    char   *string = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    while (i < 128)
    {
        if (ft_isalpha(c) == isalpha(c))
            printf("good %c\n", c);
        i++;
    }
    return(0);
}

int main()
{
    if (isalpha_tester())
        printf("All tests passed\n");
    else
        printf("KO\n");
}

/*
while i < 128
    ajouter les valeurs a string
comparer
*/