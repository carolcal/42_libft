/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayamash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:51:47 by cayamash          #+#    #+#             */
/*   Updated: 2024/10/18 12:10:18 by cayamash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	s1_len;
	char	*s_trim;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s_trim = malloc((s1_len + 1), sizeof(char))
	while(s1[i] != '\0')
	{
		while(set[j] != '\0')
		{
			if (s1[i] == set[j])
				
		}
	}
}

int	main()
{
	return (0);
}
