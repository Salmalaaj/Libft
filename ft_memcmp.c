/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:16:31 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/11 01:19:44 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;
	size_t			i;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s3[i] == s4[i] && i < n - 1)
		i++;
	return (s3[i] - s4[i]);
}
/*int main()
{
    char s3[] = "salma";
    char s4[] = "yplma";
    printf("%d\n", ft_memcmp(s3, s4, 4));
    printf("%d", memcmp(s3, s4, 4));
}*/
