/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:13:48 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 15:01:21 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)s;
	ptr2 = NULL;
	while (*ptr1 != '\0')
	{
		if (*ptr1 == c)
			ptr2 = ptr1;
		ptr1++;
	}
	return (ptr2);
}

/*int	main(void)
{
	char	*s = "Um ninho de mafagafinhos tres mafagafinhos ha.";
	char	c = 'm';
	char	*p1;
	char	*p2;
	p1 = strrchr(s, c);
	printf("s:%p, p:%p\n", s, p1);
	p2 = ft_strrchr(s, c);
	printf("s:%p, p:%p", s, p2);
	return (0);
}*/
