/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:46:00 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/17 12:42:20 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while ((i < slen) && (dlen + i) < (size - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*int	main(void)
{
	char	s1[30] = "Don't call ";
	char	*s2 = "my name, Alejandro";
	char	s3[30] = "Don't call ";
	char	*s4 = "my name, Alejandro";
	char	s5[30] = "Don't call ";
	char	*s6 = "my name, Alejandro";
	
	printf ("s1: %s, s2: %s, resp: %zu\n", s1, s2, ft_strlcat(s1, s2, 5));
	printf ("s1: %s, s2: %s, resp: %zu\n", s3, s4, ft_strlcat(s3, s4, 30));
	printf ("s1: %s, s2: %s, resp: %zu\n", s5, s6, ft_strlcat(s5, s6, 16));
	return(0);
}*/
