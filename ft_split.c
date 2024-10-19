#include "libft.h"

int		ft_count_strch(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			count ++;
		s++;
	}
	return (count);
}

int		ft_strch_len(char const *s, char c)
{
	int	i;

	i = 0;
	while(s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
char	**ft_split(char const *s, char c)
{
	int		i;
	int		array_len;
	int		substring_len;
	char	**array;

	if (ft_strlen(s) == 0)
		array_len = 1;
	else
		array_len = ft_count_strch(s, c) + 2;
	array = malloc(array_len * sizeof(char *));
	i = 0;
	if (!array)
		return (NULL);
	while(i < array_len - 1)
	{
		substring_len = ft_strch_len(s, c);
		array[i] = malloc((substring_len + 1) * sizeof(char));
		ft_strlcpy(array[i], s, substring_len + 1);
		s = s + substring_len + 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}

int		main(void)
{
	char	**arr;

	arr = ft_split("Eu quero ser pra voce, a lua iluminar do sol\0", 'r');
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
	for (int i = 0; arr[i] != NULL; i++) {
    	free(arr[i]);
	}
	free(arr);
	
}