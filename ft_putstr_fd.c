/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:42:19 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 14:19:44 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd == -1)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

/*int	main(int argc, char *argv[])
{
	int	fd;
	if(argc == 3)
	{
		fd = open(argv[1], O_WRONLY);
		ft_putstr_fd(argv[2], fd);
		close(fd);
	}
	return (0);
}*/
