/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:02:34 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/17 17:35:10 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", (char *)memchr("bonjourno", 'n', 2));
	printf("%s\n", (char *)ft_memchr("bonjourno", 'n', 2));
	
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%p, %p\n", s, (char *)memchr(s, 2, 3));
	printf("%p, %p\n", s, (char *)ft_memchr(s, 2, 3));
	
	printf("%s\n", (char *)memchr(s, 2 + 256, 3));
	printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3));
	
	int size = 15;
 	char *src = ft_calloc(size, 1);
 
 	strcpy(src, ":(){ :|: & };:");
 	printf("%p", memchr(src, '\xde', size));
 	printf("%p", ft_memchr(src, '\xde', size));
 	
	return (0);
}*/
