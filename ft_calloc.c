/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:10:08 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/19 16:59:25 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = malloc(count * size);
	if (str == 0)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
/*int main()
{
    char str[] = "salma";
    printf("%s", ft_calloc(5, 1));
}*/
