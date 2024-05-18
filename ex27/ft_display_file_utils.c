/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:37:14 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/15 16:43:13 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, sizeof(c));
}

size_t	ft_strlen(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size] != '\0')
	{
		++size;
	}
	return (size);
}
