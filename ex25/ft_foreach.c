/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:16:36 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 19:39:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*void	ft_add_two(int nb)
{
	nb = nb + 2;
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int	arr[] = {0, 1, 2, 3, 4, 5};
	int	i;

	ft_foreach(arr, 6, &ft_add_two);
	i = 0;
	while (i < 5)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}*/
