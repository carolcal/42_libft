/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:12 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 16:03:57 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>
int	main()
{
	printf("char: e, original: %c, lib: %c\n", tolower('e'), ft_tolower('e'));
	printf("char: X, original: %c, lib: %c\n", tolower('X'), ft_tolower('X'));
	printf("char: &, original: %c, lib: %c\n", tolower('&'), ft_tolower('&'));
	return(0);

}
