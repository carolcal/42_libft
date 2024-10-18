/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:56:30 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 14:18:57 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd == -1)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}

/*int	main(int argc, char *argv[])
{
	int	fd;
	if(argc == 3)
	{
		fd = open(argv[1], O_WRONLY);
		ft_putendl_fd(argv[2], fd);
		close(fd);
	}
	return (0);
}*/
