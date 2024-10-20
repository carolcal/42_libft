/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:27:46 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 18:25:46 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;
	unsigned int	size;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		start = 0;
		size = 0;
	}
	else if (len <= ((s_len + 1) - start))
		size = len;
	else
		size = (s_len - start);
	sub = malloc((size + 1) * sizeof(char)); //usar calloc
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, size + 1);
	return (sub);
}

/*int	main(void)
{
//	printf("%s\n", ft_substr("O Emerson e um tiozao", 400, 20));
//	printf("%s", ft_substr("", 1, 3));
	char *str = "01234";
 	size_t size = 10;
 	char *ret = ft_substr(str, 10, size);
	write(1, ret, 10);
 	printf("%i", ft_strncmp(ret, "", 1));
	free(ret);

	return (0);
}*/
