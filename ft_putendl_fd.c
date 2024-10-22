/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:56:30 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/22 12:44:00 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	size;

	size = ft_strlen(s);
	write(fd, s, size);
	write(fd, "\n", 1);
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
