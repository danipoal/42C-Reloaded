/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:40:49 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 19:51:54 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*int	ft_rule(char *str)
{
	if (*str == 'H')
		return (1);
	return (0);
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	sum;

	sum = 0;
	i = 0;
	while (tab[i])
	{
		sum += f(tab[i]);
		i++;
	}
	return (sum);
}

/*int	main(void)
{
	char	*arr[] = {"Hola", "Qe tal", NULL};

	printf("%i\n", ft_count_if(arr, &ft_rule));
	return (0);
}*/
