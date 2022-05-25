/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:00:26 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/26 22:37:42 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*new;
	int		i;

	s2 = (char *)s1;
	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	while (s2[i])
	{
		new[i] = s2[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
// int main()
// {
//     char s2[] = "salma";
//     printf("%s", ft_strdup(s2));
//     printf("%s", strdup(s2));
// }