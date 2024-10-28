/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:01:49 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/24 12:11:26 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*new_node;

	temp = lst;
	new_lst = NULL;
	while (temp != NULL)
	{
		new_node = ft_lstnew((*f)(temp->content));
		if (!new_node)
		{
			(del)(temp);
			(del)(new_node);
			(del)(new_lst);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		temp = temp->next;
	}
	(del)(temp);
	return (new_lst);
}

/*void	*uau(void *node)
{
	node = ft_strdup("Uau");
	return (node);
}

void del(void *node)
{
	free(node);
}

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("New Node");
	t_list *n2 = ft_lstnew("New New Node");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("p: %p, c:%s, n: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}
	t_list *head2 = ft_lstmap(head, &uau, &del);
	temp = head2;
	while(temp != NULL)
	{
		printf("p: %p, c:%s, n: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}
	return (0);
}*/
