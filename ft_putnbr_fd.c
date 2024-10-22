/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:20:31 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/22 10:53:44 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printnbr_fd(long nb, int fd)
{
	char	c;

	c = (nb % 10) + '0';
	if (nb > 9)
		ft_printnbr_fd(nb / 10, fd);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_printnbr_fd(nb, fd);
}

/*#include <limits.h>
int	main(void)
{
	int fd = open("teste", O_WRONLY);
	ft_putnbr_fd(INT_MAX, fd);
	close (fd);
	return (0);
}*/
