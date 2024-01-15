int isalpha_tester(char c)
{
    int i = 0;

    while (i < 128)
    {
        if (ft_isalpha(c) != isalpha(c))
        {
            printf("KO\n");
            printf("Input: %c\n", c);
            printf("Expected: %d\n", isalpha(c));
            printf("Actual: %d\n", ft_isalpha(c));
        }
        i++;
        c++;
    }
    return 0;
}