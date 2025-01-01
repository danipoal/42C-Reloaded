/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:33:32 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/01 17:36:29 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9')
		ft_putchar(a++);
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
