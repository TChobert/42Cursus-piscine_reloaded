/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:45:50 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/15 18:50:37 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_display_file(int fd)
{
	ssize_t			bytes_read;
	char			read_buffer[BUFFER_SIZE];
	const char		*cannot_read = "Cannot read file.";

	bytes_read = read(fd, read_buffer, BUFFER_SIZE);
	if (bytes_read < 0)
	{
		write(STDERR_FILENO, cannot_read, ft_strlen(cannot_read));
		ft_putchar_fd(STDERR_FILENO, '\n');
		return (-1);
	}
	while (bytes_read > 0)
	{
		write(STDOUT_FILENO, read_buffer, bytes_read);
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
	}
	return (0);
}
