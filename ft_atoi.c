/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:44:22 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 18:14:49 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sin;

	num = 0;
	sin = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sin = -1;
		nptr ++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = (num * 10);
		num = num + (*nptr - '0');
		nptr++;
	}
	return (num * sin);
}

/*int	main(void)
{
	char	*nbr = "  	-321a76";
	printf("original: %i\n", atoi(nbr));
	printf("mine: %i", ft_atoi(nbr));
	return (0);
}*/
