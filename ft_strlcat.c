/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:46:00 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:44:21 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (size <= dlen)
		return (slen + size);
	while ((i < slen) && (dlen + i) < (size - 1))
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[30] = "Don't call ";
	char	*s2 = "my name, Alejandro";
	char	s3[30] = "Don't call ";
	char	*s4 = "my name, Alejandro";
	char	s5[30] = "Don't call ";
	char	*s6 = "my name, Alejandro";
	
	printf ("string1: %s, string2: %s, 
return: %u\n", s1, s2, ft_strlcat(s1, s2, 5));
	printf ("string1: %s, string2: %s, 
return: %u\n", s3, s4, ft_strlcat(s3, s4, 30));
	printf ("string1: %s, string2: %s, 
return: %u\n", s5, s6, ft_strlcat(s5, s6, 16));
	return(0);
}*/
