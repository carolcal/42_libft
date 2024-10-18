/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:32:21 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 15:58:28 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, s + i);
		i++;
	}
}

/*void	ft_plusindex(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	s[] = "Eu sou a luz das estrelas";
	ft_striteri(s, &ft_plusindex);
	printf("%s", s);
	return (0);
}*/
