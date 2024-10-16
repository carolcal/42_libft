/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:51:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 19:05:20 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != c && set[i] != '\0')
		i++;
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1);
	i = 0;
	j = len;
	while (ft_contains(s1[i], set) == 1)
		i++;
	while (ft_contains(s1[j], set) == 1)
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}

/*int	main()
{
	printf("%s", ft_strtrim("%Ieiheheieihe%I", "Ie%"));
	return (0);
}*/
