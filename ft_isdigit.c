/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:46:52 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/16 11:32:39 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("char: a, original: %i, lib: %i\n", isdigit('a'), ft_isdigit('a'));
	printf("char: 4, original: %i, lib: %i\n", isdigit('4'), ft_isdigit('4'));
	printf("char: T, original: %i, lib: %i\n", isdigit('T'), ft_isdigit('T'));
	return (0);
}*/
