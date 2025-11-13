/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <aragnars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:30:53 by aragnars          #+#    #+#             */
/*   Updated: 2025/10/13 15:28:25 by aragnars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}