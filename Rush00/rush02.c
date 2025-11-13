/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:44:54 by aragnars          #+#    #+#             */
/*   Updated: 2025/09/13 19:57:38 by andqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l);

void	rush(int x, int y)
{
	int	r;
	int	c;

	c = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (c++ < y)
	{
		r = 0;
		while (r++ < x)
		{
			if (c == 1 && (r == 1 || r == x))
				ft_putchar('A');
			else if (c == y && (r == 1 || r == x))
				ft_putchar('C');
			else if ((r == 1 || r == x) || (c == 1 || c == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
