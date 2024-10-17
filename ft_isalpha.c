/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:03:07 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:31:51 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("char: e, original: %i, lib: %i\n", isalpha('e'), ft_isalpha('e'));
	printf("char: 0, original: %i, lib: %i\n", isalpha('0'), ft_isalpha('0'));
	return (0);
}*/
