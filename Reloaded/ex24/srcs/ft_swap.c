/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aragnars <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:06:16 by aragnars          #+#    #+#             */
/*   Updated: 2025/09/22 13:59:58 by aragnars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	first ;
	int	second;

	first = 5;
	second = 10;
	printf("Before swapping: first = %d, second = %d \n", first, second);
	ft_swap(&first, &second);
	printf("After swapping: first = %d, second = %d \n", first, second);
	return (0);
}*/
