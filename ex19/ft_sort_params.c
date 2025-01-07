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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	len1;
	int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (*s1 != '\0' || *s2 != '\0')
	{
		i = 0;
		while (i < len1 || i < len2)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (0);
}

int	ft_print_params(int argc, char** argv)
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

int	main(int argc, char** argv)
{
	int	i;
	char*	tmp;

	i = 1;
	while (i <= argc / 2)
	{
		if (ft_strcmp(argv[i], argv[argc - i]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[argc - i];
			argv[argc - i] = tmp;
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
