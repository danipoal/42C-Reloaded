/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:55:36 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/07 20:31:26 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *url)
{
	int		fd;
	int		readed_bytes;
	char	buffer[4096];

	fd = open(url, O_RDONLY);
	if (fd < 0)
		return (0);
	readed_bytes = read(fd, buffer, 4096);
	while (readed_bytes > 0)
	{
		write(1, buffer, readed_bytes);
		readed_bytes = read(fd, buffer, 4096);
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	if (!ft_display_file(av[1]))
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
