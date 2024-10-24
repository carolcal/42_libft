/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:05:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/24 11:46:51 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
}

/*void	print(void *node)
{
	t_list *n;
	n = node;
	printf("%p, %s\n", n, (char *)n->content);
}
int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("New Node");
	t_list *n2 = ft_lstnew("New New Node");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstiter(head, &print);
	return (0);
}*/
