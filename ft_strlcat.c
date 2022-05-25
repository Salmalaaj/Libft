/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:17:58 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/26 22:34:44 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = lendst;
	if (lendst < dstsize)
	{
		while (src[i] && lendst + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (lendst >= dstsize)
		lendst = dstsize;
	return (lendst + lensrc);
}
// int main()
// {
// 	char dst[10] = "a";
// 	printf("%zu\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 0));
// 	printf("%zu\n", strlcat(dst, "lorem ipsum dolor sit amet", 0));
// }
