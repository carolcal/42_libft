/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:52:32 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 17:54:51 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if(!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

/*int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("Last Node");
	t_list *n2 = ft_lstnew("Middle Node");
	t_list *n3 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);
	ft_lstadd_back(&head, n1);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("pointer: %p, content:%s, next: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}
	free(n1);
	free(n2);
	free(n3);
	return (0);
}*/
