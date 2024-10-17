/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:47:01 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:34:54 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{	
	printf("char: @, original: %i, lib: %i\n", isprint('@'), ft_isprint('@'));
	printf("int: 127, original: %i, lib: %i\n", isprint(127), ft_isprint(127));
	return (0);
}*/
