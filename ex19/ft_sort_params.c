/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:50:22 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 18:54:18 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	return (0);
}

static void	ft_str_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

static void	ft_putstr(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

void	ft_sort_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac -1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_str_swap(&av[i], &av[j]);
			}
			++j;
		}
		++i;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		ft_sort_params(ac, av);
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			++i;
		}
	}
	return (0);
}
