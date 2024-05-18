/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:49:27 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 20:01:22 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (f != NULL)
	{
		while (i < length)
		{
			f(tab[i]);
			++i;
		}
	}
}

/*
int main(void)
{
	int	array[] = {97, 98, 99, 100, 101, 102};

	ft_foreach(array, 6, &ft_putchar);
	return (0);
}
*/
