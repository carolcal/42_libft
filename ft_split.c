/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:05:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 16:05:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_strch(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i > 0 && s[i - 1] != c)
			count ++;
		i++;
	}
	return (count);
}

int	ft_strch_len(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] != c && s[i + j] != '\0')
		j++;
	return (j);
}

int	str_split(char **array, int array_len, char *s1, char *set)
{
	int		i;
	int		substring_len;

	i = 0;
	while (i < array_len - 1)
	{
		substring_len = ft_strch_len(s1, set[0]);
		if (substring_len)
		{
			array[i] = malloc((substring_len + 1) * sizeof(char));
			if (!array[i])
				return (0);
			s1 = ft_strtrim(s1, set);
			ft_strlcpy(array[i], s1, substring_len + 1);
		}
		s1 = s1 + substring_len + 1;
		i++;
	}
	array[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		array_len;
	char	*s1; //usar strdup 
	char	**array;
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	s1 = ft_strtrim(s, set);
	if (ft_strlen(s1) == 0)
		array_len = 1;
	else
		array_len = ft_count_strch(s1, c) + 2;
	array = malloc(array_len * sizeof(char *)); //usar calloc
	if (!array)
		return (NULL);
	if (!(str_split(array, array_len, s1, set)))
		return (NULL);
	free(s1);
	return (array);
}

int	main(void)
{
	char	**arr;

	/*arr = ft_split("Eu quero ser pra voce, a lua iluminar do sol\0", 'r');
	for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
	arr = ft_split("Eu quero ser pra voce, a lua iluminar do sol", 'w');
	for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
	arr = ft_split("Eu quero ser pra voce, a lua iluminar do sol", '\0');
	for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
	arr = ft_split("", 't');
	for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
    arr = ft_split("                  olol", ' ');
    for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
    arr = ft_split("split  ||this|for|me|||||!|", '|');
    for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");*/
    arr = ft_split( "      split       this for   me  !       ", ' ');
	 if (!arr)
                printf("TEST_SUCCESS\n");
        printf("TEST_FAILED\n");
    for (int i = 0; arr[i] != NULL; i++) {
		printf("string:%s, pointer: %p\n", arr[i], arr[i]);
	}
	printf("\n");
	for (int i = 0; arr[i] != NULL; i++) {
    	free(arr[i]);
	}
	free(arr);
	
} 