/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:04:01 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 20:27:15 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
int	ft_lowercase(char *str)
{
	return (*str >= 'a' && *str <= 'z');
}
*/

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (f != NULL)
	{
		while (tab[i] != NULL)
		{
			if (f(tab[i]) == 1)
			{
				++count;
			}
			++i;
		}
	}
	return (count);
}
