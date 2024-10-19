
#include "libft.h"

int		ft_convitoa(size_t num, char *nbr, int i)
{
	if (num > 9)
		i = ft_convitoa((num / 10), nbr, i);
	nbr[i] = (num % 10) + '0';
	return (i + 1);
}
char	*ft_itoa(int n)
{
    int     i;
	long	num;
    char	*nbr;

    i = 0;
	num = n;
	nbr = malloc(12 * sizeof(char));
    if (num < 0)
    {
        num = -num;
        i = 1;
        nbr[0] = '-';
    }
	i = ft_convitoa(num, nbr, i);
    nbr[i] = '\0';
	return (nbr);
}

int		main(void)
{
	printf("%s\n", ft_itoa(-67));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-357));
	//printf("%s\n", ft_itoa(61671684174861));
	//printf("%s\n", ft_itoa(-61671684174861));
	return (0);
}