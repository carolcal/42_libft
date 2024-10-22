/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:05:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 15:15:36 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		if (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

void	fill_array(char **array, int size, char const *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < size)
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] && s[i + len] != c)
			len++;
		array[j] = ft_substr(s, i, len);
		j++;
		i += len;
	}
	array[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		size;

	size = count_words(s, c);
	if (size == 0)
		return (ft_calloc(1, sizeof(char *)));
	array = (char **) ft_calloc(size + 1, sizeof(char *));
	if (!array)
		return (0);
	fill_array(array, size, s, c);
	return (array);
}

/*int	main()
{
	char **array = ft_split("surybiw wieyriwer cre87 ecw", 'w');
	for(int i = 0; array[i] != NULL; i++)
	{
		printf("%s\n", array[i]);
		free(array[i]);
	}
	free(array);
	return (0);
}*/