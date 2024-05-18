/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:41:57 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/15 19:00:46 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define BUFFER_SIZE 1

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
void	ft_putchar_fd(int fd, char c);
size_t	ft_strlen(const char *str);
int		ft_display_file(int fd);

#endif
