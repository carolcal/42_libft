
#include "libft.h"

int		ft_convitoa(size_t num, char *nbr)
{
	int i;
	if (num < 9)
		i = 0;
	else
		i = ft_convitoa((num / 10), nbr);
	nbr[i] = (num % 10) + '0';
	return (i + 1);
}
char	*ft_itoa(int n)
{
    char	*nbr;
	long	num;

	nbr = malloc(11 * sizeof(char));
	num = n;
	ft_convitoa(num, nbr);
	return (nbr);
}

int		main(void)
{
	printf("%s", ft_itoa(67));
	return (0);
}