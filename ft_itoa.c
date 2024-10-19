/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:04:59 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 16:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convitoa(size_t num, char *nbr, int i)
{
	if (num > 9)
		i = ft_convitoa((num / 10), nbr, i);
	nbr[i] = (num % 10) + '0';
	return (i + 1);
}

int	count_numint(long num)
{
	int	i;
	int	sin;

	i = 0;
	if (num == 0)
		return (2);
	if (num < 0)
		sin = 1;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	if (sin)
		return (i + 2);
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	long	num;
	char	*nbr;

	i = 0;
	num = n;
	size = count_numint(num);
	nbr = malloc(size * sizeof(char));
	if (!nbr)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		nbr[i] = '-';
		i++;
	}
	i = ft_convitoa(num, nbr, i);
	nbr[i] = '\0';
	return (nbr);
}

/* int	main(void)
{
	printf("%s\n", ft_itoa(-67));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-357));
	return (0);
} */