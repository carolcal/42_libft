/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:42:53 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 16:07:38 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

#include <strings.h>
#include <stdio.h>
int main()
{
    char s1[] = "Era uma vez";
    bzero(s1, 4);
    printf("%s\n", s1);
    char *s2 = s1 + 4;
    printf("%s\n", s2);

	char s3[] = "Era uma vez";
    ft_bzero(s3, 4);
    printf("%s\n", s3);
    char *s4 = s3 + 4;
    printf("%s\n", s4);
    return (0);
}
