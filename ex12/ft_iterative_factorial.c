/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 18:37:43 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 16:10:15 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	while (nb > 1)
	{
		sum *= nb;
		nb--;
	}
	return (sum);
}

int	main(void)
{
	int	n;

	n = ft_iterative_factorial(1);
	printf("%i\n", n);
	return (0);
}
