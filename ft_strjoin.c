/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:27:20 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 11:48:53 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		join_len;
	char	*s_join;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_len = s1_len + s2_len + 1;
	s_join = malloc(join_len * sizeof(char));
	if (!s_join)
		return (NULL);
	ft_strlcat(s_join, s1, s1_len + 1);
	ft_strlcat(s_join, s2, join_len);
	return (s_join);
}

/*int	main()
{
	printf("%s\n", ft_strjoin("I got the", "eye of the tiger!"));
	printf("%s\n", ft_strjoin("^ ", "hey"));
	printf("%s\n", ft_strjoin("\0", "oi"));
	printf("%s\n", ft_strjoin("", "\0"));
	return (0);
}*/
