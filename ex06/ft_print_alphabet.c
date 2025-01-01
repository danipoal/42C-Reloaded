/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:18:55 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/01 17:36:50 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
		ft_putchar(a++);
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
