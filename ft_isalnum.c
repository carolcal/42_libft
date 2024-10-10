/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:51 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 16:03:20 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	return (0);
}

#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("char: g, original: %i, lib: %i\n", isalnum('g'), ft_isalnum('g'));
	printf("char: 9, original: %i, lib: %i\n", isalnum('9'), ft_isalnum('9'));
	printf("char: *, original: %i, lib: %i\n", isalnum('*'), ft_isalnum('*'));
	return (0);
}
