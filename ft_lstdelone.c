/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:10:54 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/23 15:33:36 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void del(void *content)
{
	free(content);
}

int	main(void)
{
	char	*str = ft_strdup("New Node");
	t_list *n1 = ft_lstnew(str);

	ft_lstdelone(n1, &del);
	if(!n1)
		printf("Success");
	else
		printf("error");
	return (0);
}*/
