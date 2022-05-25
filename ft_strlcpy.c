/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:09:26 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/13 17:32:39 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*our;
	size_t	i;

	our = (char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(our));
	while (our[i] && i < dstsize - 1)
	{
		dst[i] = our[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(our));
}
/*
 int main()
 {
       char src[] = "salma";
       char dst[] = "sila";
       printf("%zu\n", ft_strlcpy(dst, src, 2));
       printf("%zu", strlcpy(dst, src, 2));

 }*/
