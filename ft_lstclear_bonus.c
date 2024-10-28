/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:34:19 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/28 12:04:24 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp_next;

	temp = *lst;
	while (temp != NULL)
	{
		temp_next = temp->next;
		ft_lstdelone(temp, del);
		temp = NULL;//testar sem esse null
		temp = temp_next;
	}
	*lst = NULL;
}

/*void del(void *node)
{
	free(node);
}

int	main(void)
{
	char *str1 = ft_strdup("Hello");
	char *str2 = ft_strdup("World");	
	t_list *head = NULL;
	t_list *n1 = ft_lstnew(str1);
	t_list *n2 = ft_lstnew(str2);
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);

	t_list *temp = head;
	while(temp != NULL)
	{
		printf("pointer: %p, content:%s, 
		next: %p\n",temp, (char *)temp->content, temp->next);
		temp = temp->next;
	}
	ft_lstclear(&head, &del);
	if(!head)
		printf("Success");
	else
		printf("error");
	return (0);
}*/
