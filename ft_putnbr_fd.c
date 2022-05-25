/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:48:25 by slaajour          #+#    #+#             */
/*   Updated: 2021/11/29 19:56:22 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	if (nb <= 9)
		ft_putchar_fd((nb + 48), fd);
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + 48), fd);
	}
}

// int main()
// {
// 	int b = 12;
// 	int f = open("salma.c", O_RDWR);
// 	ft_putnbr_fd(b, f);
// }
