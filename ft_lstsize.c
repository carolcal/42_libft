/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:08:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 13:34:47 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;
	t_list	*temp;

	size = 0;
	if (!lst || lst == NULL)
		return (size);
	temp = lst;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

/*int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("New Node");
	t_list *n2 = ft_lstnew("New New Node");
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);

	printf("%i", ft_lstsize(head));
	free(n1);
	free(n2);

	return (0);
}*/
