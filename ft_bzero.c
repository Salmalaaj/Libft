/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:07 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/26 18:24:11 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*l;
	size_t	i;

	l = (char *)s;
	i = 0;
	while (i < n)
	{
		l[i] = '\0';
		i++;
	}
}
// /*int main()
// {
//     char s[] = "salma";
//     int i = 4;
//     ft_bzero(s, i);
//     printf("this is mine %s", s);
//     bzero(s,i);
//     printf("\ntheir one %s", s);
// }*/
