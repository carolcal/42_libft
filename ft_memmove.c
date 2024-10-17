/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:12:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 18:38:15 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src >= dest)
		return (ft_memcpy(dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}

/*int main(void)
{
    	char 	s1[] = "go horse";
    	int 	size1 = ft_strlen(s1);
	char 	s2[] = "abc";
	
	char 	s3[] = "go horse";
	int	size2 = ft_strlen(s3);
	char 	s4[] =  "abc";

	memmove(s2, s1, size1);
	ft_memmove(s4, s3, size2);
	
	printf("s1: %s, s2: %s\n", s3, s4);
	printf("s3: %s, s4: %s\n", s1, s2);

	return(0);
}*/
