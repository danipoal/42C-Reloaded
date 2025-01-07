/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:19:49 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 17:44:31 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;	

	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *) malloc((size) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < (size))
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	*array;
	int	i;

	array = ft_range(1, 20);
	i = 0;
	while (array[i])
	{
		printf("%i\n", array[i]);
		i++;
	}
	return (0);
}*/
