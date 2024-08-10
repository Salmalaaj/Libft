/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:20:22 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/10 23:01:07 by salmalaajou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*at;
	unsigned char	*our;

	at = (unsigned char *)src;
	our = (unsigned char *)dst;
	if (our > at)
	{
		while (len--)
			our[len] = at[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main()
// {
// 	char dst[] = "salma";
// 	char src[] = "sousou";
// 	/*int size = 128 * 1024 * 1024;
// 		char *dst = (char *)malloc(sizeof(char) * size);
// 		char *data = (char *)malloc(sizeof(char) * size);
// 	memset(data, 'A', size);
// 			//if (!dst)
// 			//	exit(TEST_INVISIBLE);
// 			ft_memmove(dst, data, size);
// 	printf("%s\n", dst);*/
// 	printf("%s", ft_memmove(dst , src, 4));
// }
