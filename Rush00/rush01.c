/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andqueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:26:22 by andqueir          #+#    #+#             */
/*   Updated: 2025/09/13 17:14:09 by andqueir         ###   ########.fr       */
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
			if (r == 1 && c == 1)
				ft_putchar('/');
			else if ((r == y && c == 1) || (c == x && r == 1))
				ft_putchar('\\');
			else if (c == x && r == y)
				ft_putchar('/');
			else if ((c == 1 || c == x) || (r == 1 || r == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
