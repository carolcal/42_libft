/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:01:49 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 18:14:30 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void*))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*new_node;
	
	temp = lst;
	new_lst = NULL;
	new_node = NULL;
	while(temp != NULL)
	{
		temp = f(temp);
		new_node = ft_lstnew(temp->content);
		ft_lstadd_back(&new_lst, new_node);
		temp = temp->next;
	}
	del(temp);
	del(new_node);
	return (new_lst);
}

void	*uau(void *node)
{
	char	*str = ft_strdup("Uau");
	t_list *temp = node;
	temp->content = str;
	free(node);
	return (temp);
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

	t_list *head2 = ft_lstmap(head, &uau, &del);
	t_list *temp = head2;
	while(temp != NULL)
	{
		printf("pointer: %p, content:%s, next: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}
	return (0);
}
