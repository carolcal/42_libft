/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:40:18 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 18:13:50 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
	return ;
}

/*int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("New Node");
	t_list *n2 = ft_lstnew("New New Node");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("pointer: %p, content:%s, next: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}

	return (0);
}*/
