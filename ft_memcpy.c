/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:22:12 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 15:43:42 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*at;
	unsigned char	*our;
	size_t			i;

	at = (unsigned char *)dst;
	our = (unsigned char *)src;
	i = 0;
	if (at == NULL && our == NULL)
		return (NULL);
	while (i < n)
	{
		at[i] = our[i];
		i++;
	}
	dst = at;
	return (dst);
}
/*int main()
{
    char src[] = "Salma";
    char dst[100];
    
    printf("%s\n", memcpy(dst, src, 0));
    printf("this is mine : %s", ft_memcpy(dst , src, 0));
}*/
