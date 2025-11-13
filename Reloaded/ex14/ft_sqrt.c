/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <aragnars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:49:59 by aragnars          #+#    #+#             */
/*   Updated: 2025/10/13 14:27:23 by aragnars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int	sqrt;
	
	sqrt = 0;
	i = 0;
	if (nb < 0)
		return (0);
	while (sqrt < nb && i <= 46340)
	{
		sqrt = i * i;
		if (sqrt == nb)
			return (sqrt);
		i++;
	}
	return(0);
}


int	main(void)
{
	int nb = 36;
	
	printf("%d\n", ft_sqrt(nb));
	return(0);
}