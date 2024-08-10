/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmalaajouri <salmalaajouri@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:31:56 by slaajour          #+#    #+#             */
/*   Updated: 2024/08/10 22:59:24 by salmalaajou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	sign = 1;
	n = 0;
	while ((str[i] == ' ') || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1 && n < 0)
			return (-1);
		if (sign == -1 && n < 0)
			return (0);
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	return (n * sign);
}

// int main()
//  {
//       char str[] = "-214748365456231231232354";
//       printf("%d\n", atoi(str));
//       printf("%d", ft_atoi(str));
//  }
