/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:45:35 by aragnars          #+#    #+#             */
/*   Updated: 2025/09/13 21:06:20 by andqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (r++ < y)
	{
		c = 0;
		while (c++ < x)
		{
			if ((r == 1 && c == 1) || (r == y && c == 1))
				ft_putchar('A');
			else if ((c == x && r == 1) || (c == x && r == y))
				ft_putchar('C');
			else if ((c == 1 || c == x) || (r == 1 || r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
