/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 18:37:43 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/01 19:16:24 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	sum;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	sum = 1;
	if (nb > 1)
		sum = ft_recursive_factorial(nb - 1);
	return (sum * nb);
}

/*int	main(void)
{
	int	n;

	n = ft_recursive_factorial(5);
	printf("%i\n", n);
	return (0);
}*/
