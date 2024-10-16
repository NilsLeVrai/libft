
# include <ctype.h> // is_blabla
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <assert.h>
# include <limits.h>
//# include <bsd/string.h> // mac
# include "libft.h"

void test_strdup()
{
	printf("ft_strdup: ");
	char *str = "Hello World!";
	char *ptr = strdup(str);
	char *ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "Hello Wo\0rld!";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "Hello World!\0";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "Hel\xablo World!\0\0";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "\0";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "\0\0";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "\x2A";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);

	str = "\x2A\x2A";
	ptr = strdup(str);
	ptr2 = ft_strdup(str);
	strcmp(ptr, ptr2) == 0 ? printf("✅ ") : printf("❌ ");
	free(ptr);
	free(ptr2);
	printf("\n");
}

void test_calloc()
{
	printf("ft_calloc: ");
	int *ptr = (int *)calloc(5, sizeof(int));
	int *ptr2 = (int *)ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		if (ptr[i] != ptr2[i])
			break;
		i++;
	}
	free(ptr);
	free(ptr2);
	i == 5 ? printf("✅ ") : printf("❌ ");

	size_t count = 0;
	size_t size = 5;
	void *ptr3 = ft_calloc(count, size);
	ptr3 == NULL ? printf("✅ ") : printf("❌ ");
	free(ptr3);

	count = 5;
	size = 0;
	ptr3 = ft_calloc(count, size);
	ptr3 == NULL ? printf("✅ ") : printf("❌ ");
	free(ptr3);

	count = 2147888888;
	size = 2147888888;
	ptr3 = ft_calloc(count, size);
	ptr3 == NULL ? printf("✅ ") : printf("❌ ");
	printf("\n");

}

void test_atoi()
{
	printf("ft_atoi: ");
	char *str = "123456";
	int i = atoi(str);
	int j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-123456";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "0";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "2147483647";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-2147483648";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "2147483648";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-2147483649";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "000000";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-00034";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-3";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "3";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-0";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "12\0";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "12\0\0";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "10";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "-10";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "   \t  \t 123456";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "   \t  \t -1234a56";
	i = atoi(str);
	j = ft_atoi(str);
	i == j ? printf("✅ ") : printf("❌ ");

	printf("(Optional) ");
	str = "318446744075857035261";
	i = atoi(str);
	j = ft_atoi(str);
	//printf("atoi: %d, ft_atoi: %d\n", i, j);
	i == j ? printf("✅ ") : printf("❌ ");
	printf("\n");

}

void test_strnstr()
{
	printf("ft_strnstr: ");
	char *str = "Patrick Bosso";
	char *ptr = strnstr(str, "k B", 12);
	char *ptr2 = ft_strnstr(str, "k B", 12);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "k B", 8);
	ptr2 = ft_strnstr(str, "k B", 8);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "k B", 9);
	ptr2 = ft_strnstr(str, "k B", 9);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "k B", 10);
	ptr2 = ft_strnstr(str, "k B", 10);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "Patrock", 8);
	ptr2 = ft_strnstr(str, "Patrock", 8);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "Bo", 9);
	ptr2 = ft_strnstr(str, "Bo", 9);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "Bo", 10);
	ptr2 = ft_strnstr(str, "Bo", 10);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strnstr(str, "r", 4);
	ptr2 = ft_strnstr(str, "r", 4);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_memcmp()
{
	printf("ft_memcmp: ");
	char *str = "pas d'inspi";
	char *str2 = "pas d'inspi";
	int i = memcmp(str, str2, 10);
	int j = ft_memcmp(str, str2, 10);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 0);
	j = ft_memcmp(str, str2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 5);
	j = ft_memcmp(str, str2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "ouais";
	str2 = "ouais ouais";
	i = memcmp(str, str2, 123);
	j = ft_memcmp(str, str2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 0);
	j = ft_memcmp(str, str2, 0);
	i == j ? printf("✅ ") : printf("❌ ");
	
	i = memcmp(str, str2, 4);
	j = ft_memcmp(str, str2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 7);
	j = ft_memcmp(str, str2, 7);
	i == j ? printf("✅ ") : printf("❌ ");

	str = "ouais ouais";
	str2 = "ouais";
	i = memcmp(str, str2, 123);
	j = ft_memcmp(str, str2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 0);
	j = ft_memcmp(str, str2, 0);
	i == j ? printf("✅ ") : printf("❌ ");
	
	i = memcmp(str, str2, 4);
	j = ft_memcmp(str, str2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str, str2, 7);
	j = ft_memcmp(str, str2, 7);
	i == j ? printf("✅ ") : printf("❌ ");

	int str3[5] = {1, 2, 3, 4, 5};
	int str4[5] = {1, 2, 3, 4, 5};
	i = memcmp(str3, str4, 5);
	j = ft_memcmp(str3, str4, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str3, str4, 0);
	j = ft_memcmp(str3, str4, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str3, str4, 3);
	j = ft_memcmp(str3, str4, 3);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str3, str4, 7);
	j = ft_memcmp(str3, str4, 7);
	i == j ? printf("✅ ") : printf("❌ ");

	int str5[3] = {1, 2, 3};
	i = memcmp(str3, str5, 5);
	j = ft_memcmp(str3, str5, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str3, str5, 0);
	j = ft_memcmp(str3, str5, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = memcmp(str3, str5, 3);
	j = ft_memcmp(str3, str5, 3);
	i == j ? printf("✅ ") : printf("❌ ");
	printf("\n");

}

void test_memchr()
{
	printf("ft_memchr: ");
	char *str = "Ouais la team";
	char *ptr = memchr(str, 't', 13);
	char *ptr2 = ft_memchr(str, 't', 13);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = memchr(str, 'O', 13);
	ptr2 = ft_memchr(str, 'O', 13);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = memchr(str, 'a', 13);
	ptr2 = ft_memchr(str, 'a', 13);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = memchr(str, 'Q', 13);
	ptr2 = ft_memchr(str, 'Q', 13);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = memchr(str, 'e', 5);
	ptr2 = ft_memchr(str, 'e', 5);
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	int str3[5] = {1, 2, 3, 4, 5};
	int *ptr3 = memchr(str3, 3, 5);
	int *ptr4 = ft_memchr(str3, 3, 5);
	ptr3 == ptr4 ? printf("✅ ") : printf("❌ ");

	ptr3 = memchr(str3, 1, 5);
	ptr4 = ft_memchr(str3, 1, 5);
	ptr3 == ptr4 ? printf("✅ ") : printf("❌ ");

	ptr3 = memchr(str3, 34, 5);
	ptr4 = ft_memchr(str3, 34, 5);
	ptr3 == ptr4 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_strncmp()
{
	printf("ft_strncmp: ");
	const char *s1 = ">.<'";
	const char *s2 = ">.<'";
	int i = strncmp(s1, s2, 123);
	int j = ft_strncmp(s1, s2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 0);
	j = ft_strncmp(s1, s2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 5);
	j = ft_strncmp(s1, s2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 4);
	j = ft_strncmp(s1, s2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 3);
	j = ft_strncmp(s1, s2, 3);
	i == j ? printf("✅ ") : printf("❌ ");

	s1 = ">.>'";
	i = strncmp(s1, s2, 123);
	j = ft_strncmp(s1, s2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 0);
	j = ft_strncmp(s1, s2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 5);
	j = ft_strncmp(s1, s2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 4);
	j = ft_strncmp(s1, s2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 3);
	j = ft_strncmp(s1, s2, 3);
	i == j ? printf("✅ ") : printf("❌ ");

	s1 = ">.<'";
	s2 = ">.>'";
	i = strncmp(s1, s2, 123);
	j = ft_strncmp(s1, s2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 0);
	j = ft_strncmp(s1, s2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 5);
	j = ft_strncmp(s1, s2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 4);
	j = ft_strncmp(s1, s2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 3);
	j = ft_strncmp(s1, s2, 3);
	i == j ? printf("✅ ") : printf("❌ ");

	s1 = "ouais";
	s2 = " ouais ouais";
	i = strncmp(s1, s2, 123);
	j = ft_strncmp(s1, s2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 0);
	j = ft_strncmp(s1, s2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 5);
	j = ft_strncmp(s1, s2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 4);
	j = ft_strncmp(s1, s2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 7);
	j = ft_strncmp(s1, s2, 7);
	i == j ? printf("✅ ") : printf("❌ ");

	s1 = "ouais ouais";
	s2 = " ouais";
	i = strncmp(s1, s2, 123);
	j = ft_strncmp(s1, s2, 123);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 0);
	j = ft_strncmp(s1, s2, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 5);
	j = ft_strncmp(s1, s2, 5);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 4);
	j = ft_strncmp(s1, s2, 4);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strncmp(s1, s2, 7);
	j = ft_strncmp(s1, s2, 7);
	i == j ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_strrchr()
{
	printf("ft_strrchr: ");
	char *str = "Hello World!";
	char *ptr = strrchr(str, 'W');
	char *ptr2 = ft_strrchr(str, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strrchr(str, 'o');
	ptr2 = ft_strrchr(str, 'o');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strrchr(str, '!');
	ptr2 = ft_strrchr(str, '!');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strrchr(str, '$');
	ptr2 = ft_strrchr(str, '$');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strrchr(str, 'H');
	ptr2 = ft_strrchr(str, 'H');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strrchr(str, '\0');
	ptr2 = ft_strrchr(str, '\0');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	char *str2 = "";
	ptr = strrchr(str2, 'W');
	ptr2 = ft_strrchr(str2, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	str2 = "Hell\0o World!";
	ptr = strrchr(str2, '\0');
	ptr2 = ft_strrchr(str2, '\0');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	str2 = "Hell\0o World!";
	ptr = strrchr(str2, 'W');
	ptr2 = ft_strrchr(str2, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_strchr()
{
	printf("ft_strchr: ");
	char *str = "Hello World!";
	char *ptr = strchr(str, 'W');
	char *ptr2 = ft_strchr(str, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strchr(str, 'o');
	ptr2 = ft_strchr(str, 'o');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strchr(str, '!');
	ptr2 = ft_strchr(str, '!');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strchr(str, '$');
	ptr2 = ft_strchr(str, '$');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strchr(str, 'H');
	ptr2 = ft_strchr(str, 'H');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	ptr = strchr(str, '\0');
	ptr2 = ft_strchr(str, '\0');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	char *str2 = "";
	ptr = strchr(str2, 'W');
	ptr2 = ft_strchr(str2, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	str2 = "Hell\0o World!";
	ptr = strchr(str2, '\0');
	ptr2 = ft_strchr(str2, '\0');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");

	str2 = "Hell\0o World!";
	ptr = strchr(str2, 'W');
	ptr2 = ft_strchr(str2, 'W');
	ptr == ptr2 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_tolower()
{
	printf("ft_tolower: ");
	int i = -1;
	while (++i < 128)
		assert(ft_tolower(i) == tolower(i));
	printf("✅ \n");
}

void test_toupper()
{
	printf("ft_toupper: ");
	int i = -1;
	while (++i < 128)
		assert(ft_toupper(i) == toupper(i));
	printf("✅ \n");
}


/*void test_strlcpy()
{
	printf("ft_strlcpy: ");
	char buf[10] = "abcdefghij";
	char buf2[10] = "abcdefghij";
	char *str = "Ouais";
	int i = strclpy(buf, str, 10);
	int j = ft_strlcpy(buf2, str, 10);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strclpy(buf, str, 0);
	j = ft_strlcpy(buf2, str, 0);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strclpy(buf, str, 2);
	j = ft_strlcpy(buf2, str, 2);
	i == j ? printf("✅ ") : printf("❌ ");

	i = strclpy(buf, str, 6);
	j = ft_strlcpy(buf2, str, 6);
	i == j ? printf("✅ ") : printf("❌ ");
	printf("\n");
}*/

void test_memmove()
{
	printf("ft_memmove: ");
	char buf[10] = "abcdefghij";
	char buf2[10] = "abcdefghij";

	memset(buf, 0, sizeof(buf));
	memset(buf2, 0, sizeof(buf2));

	memmove(buf, "Hello World!", 10);
	ft_memmove(buf2, "Hello World!", 10);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memmove(buf, "Hello World!", 0);
	ft_memmove(buf2, "Hello World!", 0);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memmove(buf, "Hello World!", 2);
	ft_memmove(buf2, "Hello World!", 2);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memmove(buf, "ouais", 2);
	ft_memmove(buf2, "ouais", 2);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memmove(buf, "ouais", 6);
	ft_memmove(buf2, "ouais", 6);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}

void test_memcpy()
{
	printf("ft_memcpy: ");
	char buf[10] = "abcdefghij";
	char buf2[10] = "abcdefghij";
	char *ptr = "ouais";

	memcpy(buf2, ptr, 5);
	ft_memcpy(buf, ptr, 5);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memcpy(buf2, ptr, 0);
	ft_memcpy(buf, ptr, 0);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memcpy(buf2, ptr, 3);
	ft_memcpy(buf, ptr, 3);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");
	printf("\n");
	// bus error si dest < src
}

void test_bzero()
{
	printf("ft_bzero: ");
	char buf[100];
	char buf2[100];

	bzero(buf, sizeof(buf));
	ft_bzero(buf2, sizeof(buf2));
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	bzero(buf, 1);
	ft_bzero(buf2, 1);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	bzero(buf, 46);
	ft_bzero(buf2, 46);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	bzero(buf, 100);
	ft_bzero(buf2, 100);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");
	printf("\n");
}


void test_memset()
{
	printf("ft_memset: ");
	char buf[100];
	char buf2[100];

	memset(buf, 0, sizeof(buf));
	memset(buf2, 0, sizeof(buf2));

	memset(buf, '*', 7);
	ft_memset(buf2, '*', 7);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, '\0', 46);
	ft_memset(buf2, '\0', 46);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, 'A', 1);
	ft_memset(buf2, 'A', 1);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, '@', 100);
	ft_memset(buf2, '@', 100);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, INT_MIN, 40);
	ft_memset(buf2, INT_MIN, 40);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, INT_MAX, 40);
	ft_memset(buf2, INT_MAX, 40);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, -1, 100);
	ft_memset(buf2, -1, 100);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");

	memset(buf, 'n', 100);
	ft_memset(buf2, 'n', 100);
	memcmp(buf, buf2, sizeof(buf)) == 0 ? printf("✅ ") : printf("❌ ");
	printf("\n");

/*	memset(NULL, 1, 100);
	ft_memset(NULL, 1, 100);
	printf("✅ \n");
	memset(NULL, 0, 100);
	memset(buf, 223, -12)
	segfault si buf est NULL
	trace trap si n est négatif
	*/
}
void test_strlen()
{
	printf("ft_strlen: ");
	char *str = "Hello World!";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "Hello Wo\0rld!";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "Hello World!\0";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "Hel\xablo World!\0\0";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "\0";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "\0\0";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "\xA5";
	ft_strlen(str) == strlen(str) ? printf("✅ ") : printf("❌ ");

	str = "\x2A\x2A";
	ft_strlen(str) == strlen(str) ? printf("✅ \n") : printf("❌ \n");
}
void test_is_blabla()
{
	printf("ft_isblabla: ");
	char c = 0;
	while (c++ < 127)
	{
		assert(ft_isalnum(c) == isalnum(c));
		assert(ft_isalpha(c) == isalpha(c));
		assert(ft_isascii(c) == isascii(c));
		assert(ft_isdigit(c) == isdigit(c));
		assert(ft_isprint(c) == isprint(c));
	}
	printf("✅ \n");
}


/* 
verifier si le makefile relink pas
nm -u libft.a
make && cc -Wall -Werror -Wextra test_libft.c -lbsd c libft.a  && ./a.out
 */

int main ()
{

	printf("Partie 1:\n");
	test_is_blabla();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	//test_strlcpy();
	//test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	printf("\nPartie 2:\n");

	return (0);
}