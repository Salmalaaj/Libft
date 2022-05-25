/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:39 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 15:51:47 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	while (i < n)
	{	
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//     char str[] = "salma";
//     int c = 's';
//     printf("%d", ft_memchr(str, c, 4));
// }
