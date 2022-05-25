/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:58:37 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/30 20:12:19 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *l, char c)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	if (!l)
		return (0);
	while (l[i])
	{
		while (l[i] && l[i] == c)
			i++;
		check = 0;
		while (l[i] && l[i] != c)
		{
			check = 1;
			i++;
		}
		if (check == 1)
			count++;
	}
	return (count);
}

static int	word_length(char *k, int i, char c)
{
	int	j;

	j = 0;
	if (!k)
		return (0);
	while (k[i + j] != c && k[i + j])
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		size;

	if (s == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count((char *)s, c))
	{
		while (s[i] == c)
			i++;
		size = word_length((char *)s, i, c);
		str[j] = (char *)malloc(sizeof(char) * size + 1);
		strlcpy(str[j], s + i, size + 1);
		i += size;
		j++;
	}
	str[j] = NULL;
	return (str);
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**str;
// 	int		j;
// 	int		i;
// 	int		remember;

// 	i = 0;
// 	j = 0;
// 	str = (char **)malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
// 	if (!str)
// 		return (NULL);
// 	while (s[i] == c)
// 		i++;
// 	remember = i;
// 	while (j < word_count((char *)s, c))
// 	{
// 		if (s[i] == c || s[i] == '\0')
// 		{
// 			str[j++] = ft_substr(s, remember, i - remember);
// 			while (s[i] == c && s[i] != '\0')
// 				i++;
// 			remember = i;
// 		}
// 		i++;
// 	}
// 	str[j] = 0;
// 	return (str);
// }

// int main()
// {
    // char **s;
    // int j = 0;
    // s = ft_split("   lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	// printf("%p\n", s[0]);
    // while (s[j])
    // { 
        // printf("%s\n", s[j]);
        // j++;
    // }
    // return (0);
// }