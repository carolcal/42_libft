/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:07:10 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 15:30:53 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		s_len;
	char	*str;

	i = 0;
	s_len = ft_strlen(s);
	str = malloc((s_len + 1) * sizeof(char));
	while (i <= s_len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_plusindex(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	printf("%s", ft_strmapi("eu sou o tudo e o nada", &ft_plusindex));
	return (0);
}*/
