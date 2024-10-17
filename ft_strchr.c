/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:57:31 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/17 11:41:58 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	if (*ptr == c)
		return (ptr);
	return (NULL);
}

int	main(void)
{
	char	*str = "teste";
//	char	c = '\0';

	printf("str: %p, prt: %p\n", str, strchr("teste", 'e'));
	printf("str: %p, prt: %p", str, ft_strchr("teste", 'e'));
	return (0);
}
