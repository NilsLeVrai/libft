/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:36:11 by niabraha          #+#    #+#             */
/*   Updated: 2024/01/12 16:50:32 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <stdio.h>
	// MANDATORY PART 1

int	atoi_tester()
{
    int i;

    printf("Test 1: i = 0 \n");
    if (ft_atoi("0") == atoi("0"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 2: i = 1 \n");
    if (ft_atoi("1") == atoi("1"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 3: i = -1 \n");
    if (ft_atoi("-1") == atoi("-1"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 4: i = 42 \n");
    if (ft_atoi("42") == atoi("42"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 5: i = -42 \n");
    if (ft_atoi("-42") == atoi("-42"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 6: i = 2147483647 \n");
    if (ft_atoi("2147483647") == atoi("2147483647"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 7: i = -2147483648 \n");
    if (ft_atoi("-2147483648") == atoi("-2147483648"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 8: i = 2147483648 \n");
    if (ft_atoi("2147483648") == atoi("2147483648"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 9: i = -2147483649 \n");
    if (ft_atoi("-2147483649") == atoi("-2147483649"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 10: i = -594471 \n");
    if (ft_atoi("-594471") == atoi("-594471"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 11: i = -0 \n");
    if (ft_atoi("-0") == atoi("-0"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 12: i = 000 \n");
    if (ft_atoi("000") == atoi("000"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 13: i = 8 \n");
    if (ft_atoi("8") == atoi("8"))
        printf("✅\n");
    else
        printf("KO\n");
    
    printf("Test 14: i = -7 \n");
    if (ft_atoi("-7") == atoi("-7"))
        printf("✅\n");
    else
        printf("KO\n");
}

int main()
{
    if (atoi_tester() == 0)
        printf("All tests passed\n");
    else
        printf("KO\n");
}

// 	char *s = "%p";
// 	int v = 5;
// 	int *vv = &v;

// 	printf("result :\n");
// 	int result = ft_printf(s, vv);
// 	printf("\nexpected :\n");
// 	int expected = printf(s, vv);

// 	assert(result == expected);