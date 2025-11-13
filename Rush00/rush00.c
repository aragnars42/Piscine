/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-sen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:47:59 by dade-sen          #+#    #+#             */
/*   Updated: 2025/09/13 17:08:01 by dade-sen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
			if ((c == 1 && r == 1) || (r == x && c == y))
				ft_putchar('o');
			else if ((c == y && r == 1) || (r == x && c == 1))
				ft_putchar('o');
			else if (r == 1 || r == x)
				ft_putchar('|');
			else if (c == 1 || c == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
