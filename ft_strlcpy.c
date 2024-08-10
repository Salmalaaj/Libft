/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:09:26 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/10 23:02:09 by salmalaajou      ###   ########.fr       */
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
       char dst[] = "sousou";
       printf("%zu\n", ft_strlcpy(dst, src, 2));
       printf("%zu", strlcpy(dst, src, 2));

 }*/
