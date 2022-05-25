/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:27:44 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 15:27:50 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t		i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
//void	diali(unsigned int i, char *h)
// {
// 	*h -= 32;
// }

// int main()
// {
// 	// void (*p)(unsigned int, char*);
// 	// p = &diali;
// 	char *s = strdup("salma");
// 	ft_striteri(s, diali);
// 	printf("%s", s);
// }