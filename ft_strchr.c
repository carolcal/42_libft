/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:57:31 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 14:05:40 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*str = "Engenharia de Software";
	char	c = 'i';
	char	*ptr1;
	char	*ptr2;

	ptr1 = strchr(str, c);
	ptr2 = ft_strchr(str, c);

	printf("str: %p, prt: %p\n", str, ptr1);
	printf("str: %p, prt: %p", str, ptr2);
	return (0);
}*/
