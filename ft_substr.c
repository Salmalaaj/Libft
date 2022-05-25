/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:01:16 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 20:23:05 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rm;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		len = 0;
	rm = (char *) malloc(sizeof(char) * len + 1);
	if (!rm)
		return (NULL);
	while (s[i] && j < len)
	{
		rm[j] = s[i];
		i++;
		j++;
	}
	rm[len] = '\0';
	return (rm);
}
// int main()
// {
//     printf("%s", ft_substr("tripouille", 1, 1));
//     return (0);
// }
