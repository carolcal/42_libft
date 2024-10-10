/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 09:46:18 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/10 18:26:28 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	*s1 = "Hello";
// 	char	*s2 = "Hello";
// 	printf ("string: %s, original: %lu, lib: %lu\n", s1, strlen(s1), ft_strlen(s2));
// 	return (0);
// }