/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:13:48 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/17 12:10:03 by cayamash         ###   ########.fr       */
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
		if (*ptr1 == (unsigned char)c)
			ptr2 = ptr1;
		ptr1++;
	}
	if (!ptr2 && (unsigned char)c == '\0')
		return (ptr1);
	return (ptr2);
}

/*int	main(void)
{
	char	*s = "Um ninho de mafagafinhos tres mafagafinhos ha.";
//	char	*s2 = "";
//	char	c = '\0';

	printf("s:%p, p:%p\n", s, strrchr("teste", '\0' + 256));
	printf("s:%p, p:%p", s, ft_strrchr("teste", '\0' + 256));
	return (0);

}*/
