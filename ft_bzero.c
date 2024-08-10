/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:07 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/10 23:00:25 by salmalaajou      ###   ########.fr       */
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

int main()
{
    char s[] = "salma";
    int i = 4;
    ft_bzero(s, i);
    printf("Mine %s", s);
    bzero(s,i);
    printf("\n Not mine %s", s);
}
