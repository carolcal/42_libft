/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:06:38 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:34:19 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("char: e, original: %i, lib: %i\n", isascii('e'), ft_isascii('e'));
	printf("char: X, original: %i, lib: %i\n", isascii('X'), ft_isascii('X'));
	printf("char: &, original: %i, lib: %i\n", isascii('&'), ft_isascii('&'));
	printf("int: 165, original: %i, lib: %i\n", isascii(165), ft_isascii(165));
	return (0);
}*/
