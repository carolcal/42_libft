/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:12:05 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 18:26:23 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char s1[30];
// 	char s2[20] = "Hello darkness";
// 	char s3[30];
// 	char s4[20] = "Hello darkness";

// 	memcpy(s1, s2, 30);
// 	ft_memcpy(s3, s4, 30);
// 	printf("Original:: s1: %s, s2: %s\n", s1, s2);
// 	printf("Libft:: s1: %s, s2: %s\n", s3, s4);
// }