/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <aragnars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:57:39 by aragnars          #+#    #+#             */
/*   Updated: 2025/10/13 16:08:41 by aragnars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (ac >= 2 && av[i])
	{
		j = 0;
		if (av[i][j++] >= av[i + 1][j++])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		i++;
		
			
	}
}