/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:37:10 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/01 17:39:44 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

int	main(int argc, char** argv)
{
	int	i;
	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]++);
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
