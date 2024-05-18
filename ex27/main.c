/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:29:44 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/15 19:00:30 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

static void	name_missing(void)
{
	const char	*name_missing = "File name missing.";

	write(STDERR_FILENO, name_missing, ft_strlen(name_missing));
	ft_putchar_fd(STDERR_FILENO, '\n');
}

static void	too_many_args(void)
{
	const char	*too_many_args = "Too many arguments.";

	write(STDERR_FILENO, too_many_args, ft_strlen(too_many_args));
	ft_putchar_fd(STDERR_FILENO, '\n');
}

static void	cannot_read(void)
{
	const char	*cannot_read = "Cannot read file.";

	write(STDERR_FILENO, cannot_read, ft_strlen(cannot_read));
	ft_putchar_fd(STDERR_FILENO, '\n');
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac < 2)
	{
		name_missing();
		return (-1);
	}
	if (ac > 2)
	{
		too_many_args();
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		cannot_read();
		return (-1);
	}
	if (ft_display_file(fd) == -1)
	{
		return (-1);
	}
	close(fd);
	return (EXIT_SUCCESS);
}
