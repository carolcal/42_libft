/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:33:45 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 16:03:41 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int 	i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50] = "Isso e uma string.";
    char s2[50] = "Isso e uma string.";
    unsigned char c = 130;
    int n = 7;

    memset(s1, c, n);
    ft_memset(s2, c, n);
    printf("string: %s, char: %u, n: %i\n", s1, c, n);
    printf("string: %s, char: %u, n: %i\n", s2, c, n);
    return (0);
}
