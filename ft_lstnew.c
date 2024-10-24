/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:49:45 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 12:07:15 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new = (t_list *)malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/*int	main(void)
{
	int num = 5;
	t_list *n1 = ft_lstnew("First Node");
	t_list *n2 = ft_lstnew(&num);

	printf("pointer: %p, content:%s, next: %p\n",n1, (char *)n1->content, n1->next);
	printf("pointer: %p, content:%d, next: %p\n",n2, *(int *)n2->content, n2->next);
	free(n1);
	free(n2);
	return (0);
}*/
