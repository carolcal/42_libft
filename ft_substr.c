/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:27:46 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 11:49:28 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		s_len;
	int		size;

	s_len = ft_strlen(s);
	if (len <= ((s_len + 1) - start))
		size = len;
	else
		size = (s_len + start);
	sub = malloc((size + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, size + 1);
	return (sub);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("O Emerson e um tiozao", 3, 30));
	printf("%s", ft_substr("", 7, 3));
	return (0);
}*/
