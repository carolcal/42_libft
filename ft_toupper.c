/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:03:15 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 16:04:02 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("char: a, original: %c, lib: %c\n", toupper('a'), ft_toupper('a'));
	printf("char: A, original: %c, lib: %c\n", toupper('A'), ft_toupper('A'));
	printf("char: $, original: %c, lib: %c\n", toupper('$'), ft_toupper('$'));
	return(0);
}
