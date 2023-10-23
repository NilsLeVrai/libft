int	ft_power(int nb, int power)
{
	int	i;

	i = 0;
	while (i < power)
	{
		nb *= 10;
		i++;
	}
	return (nb);
}
#include <stdio.h>
int main ()
{
	int	nb;
	int	power;

	nb = 10;
	power = 4;
	while (power )
	printf("%d", ft_power(nb, power));
}