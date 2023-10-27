/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-icule.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:33:48 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/27 18:33:52 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 




//merci alexis t es le meilleur
// strchr
strcmp(strchr("", '\0'), ft_strchr("", '\0')) == 0 ? printf("🍾") : printf("🤡");





//memcpy
#include <stdio.h>
#include <string.h>

int	main()
{
	size_t n = 2;
	char tab[10] = "ouqis";
	char tab2[10] = "J";
	memcpy(tab, tab2, n);
	printf("Pas moi:\n%s",tab2);
	printf("\n");
	ft_memcpy(tab, tab2, n);
	printf("Moi:\n%s",tab2);
}

//bzero
#include <stdio.h>
#include <string.h>

int	main()
{
	char tab[10];
	char tab2[10];
	bzero(tab, 3);
	ft_bzero(tab2, 3);
	printf("%s",tab);
	printf("\n");
	printf("%s", tab2);
}

// memset
#include <stdio.h>
#include <string.h>

int	main()
{
	char tab[10];
	char tab2[10];
	memset(tab, '*', 3);
	ft_memset(tab2, '-', 3);
	printf("%s",tab);
	printf("\n");
	printf("%s", tab2);
} */
	//Cast zero en void*
	//NULL
	/* int:
	if (!s1 || !s2)
		return -1;
	char:
		if (!s1 || !s2)
		return NULL;
	void:
		return ; */