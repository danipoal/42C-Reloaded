/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:16:09 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 17:17:11 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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

/*int	main(void)
{
	char* s1 = "Hola";
	char* s2 = "Holi";

	printf("Diff: %i\n", ft_strcmp(s1, s2));
	printf("Diff: %i\n", strcmp(s1, s2));
	return (0);
}*/
