/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:07:10 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/22 10:28:28 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	s_len;
	char			*str;

	i = 0;
	s_len = ft_strlen(s);
	str = malloc((s_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < s_len)
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
	//printf("%s", ft_strmapi("eu sou o tudo e o nada", &ft_plusindex));
     char *b = "override this !";
        size_t size = strlen(b);
        char b2[size + 1];

        for (size_t i = 0; i < size; i++)
                b2[i] = ft_plusindex(i, b[i]);
        b2[size] = '\0';
        char *ret = ft_strmapi(b, ft_plusindex);
        if (!strcmp(b2, ret))
                printf("TEST_SUCCESS");
        else
            printf("TEST_FAILED");
	return (0);
}*/
