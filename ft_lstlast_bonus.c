/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:35:09 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/24 11:45:46 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

/*int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("Last Node");
	t_list *n2 = ft_lstnew("Middle Node");
	t_list *n3 = ft_lstnew("First Node");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);

	printf("%s", (char *)ft_lstlast(head)->content);
	free(n1);
	free(n2);
	free(n3);
	return (0);
}*/
