/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:40:53 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 19:18:27 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 1)
	{
		return (0);
	}
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		++i;
	}
	return (0);
}
