/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:56:02 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/22 15:59:24 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	dlen = 0;
	slen = ft_strlen(src);
	if (size > 0)
	{
		while (src[dlen] != '\0' && dlen < (size - 1))
		{
			dst[dlen] = src[dlen];
			dlen++;
		}
		dst[dlen] = '\0';
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
