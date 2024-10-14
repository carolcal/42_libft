/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:12:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 18:28:16 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	/* if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n]; */
    unsigned char	*temp;
	size_t	i;

	i = 0;
	temp = NULL;
	while (i < n)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;	
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}

int main(void)
{
    char *s1 = "go horse";
    int size1 = ft_strlen(s1);
	char *s2 = malloc(size1 + 1);
	char *s3 = "go horse";
	int		size2 = ft_strlen(s3);
	char *s4 =  malloc(size2 + 1);
	memmove(s2, s1, size1);
	ft_memmove(s4, s3, size2);
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("s3: %s, s4: %s\n", s3, s4);
    return(0);
}