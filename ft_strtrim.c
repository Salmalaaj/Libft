/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:38:17 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 20:11:23 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) && i <= (end - 1))
		i++;
	while (ft_strchr(set, s1[end - 1]) && i <= (end - 1))
		end--;
	str = (char *)malloc(sizeof(char) * end - i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, end - i + 1);
	return (str);
}

// int main()
// {
// 	char s1[] = "           ";
// 	char set[] = " ";
// 	printf("%s", ft_strtrim(s1, set));
// } 
