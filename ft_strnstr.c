/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:33:29 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/15 15:36:12 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*our;
	unsigned char	*at;

	our = (unsigned char *) haystack;
	at = (unsigned char *) needle;
	i = 0;
	if (at[i] == '\0')
		return ((char *)our);
	while (our[i] && i < len)
	{
		j = 0;
		while (our[i + j] == at[j] && (i + j) < len)
		{
			if (at[j + 1] == '\0')
				return ((char *)&our[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
    char str[] = "salma";
    char to_find[] = "al";
    printf("%s", ft_strnstr(str, to_find, 3));
}*/
