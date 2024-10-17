/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:56:02 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:43:29 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	slen = 0;
	dlen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size > 0)
	{
		while (src[dlen] != '\0' && dlen < (size - 1))
		{
			dest[dlen] = src[dlen];
			dlen++;
		}
		dest[dlen] = '\0';
	}
	return (slen);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[30];
	char	*s2 = "Meu nome é Caroline!";
	printf ("string1: %s, string2: %s, 
return: %u\n", s1, s2, ft_strlcpy(s1, s2, 5));
	return(0);
}*/
