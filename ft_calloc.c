/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:01:15 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/28 14:01:01 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
//int	main(void)
//{
/*	int n1 = 30;
	int n2 = 1;
	void *ptr1 = calloc(n1, n2);
	printf("pointer: %p\n", ptr1);
	write(1, ptr1, (n1*n2)+10);
	write(1, "\n", 1);
	
	void *ptr2 = ft_calloc(n1, n2);
	printf("pointer: %p\n", ptr2);
	write(1, ptr2, (n1*n2)+10);
	write(1, "\n", 1);*/

/*	char *str = (char *)ft_calloc(30, 1);
    	if (!str)
        	write(1, "NULL", 4);
   	else
        	write(1, str, 30);

*/
/*	printf("%p\n", calloc(0, 5));
	printf("%p", ft_calloc(0, 5));
	return (0);
}*/
