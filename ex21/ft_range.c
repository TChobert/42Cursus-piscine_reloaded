/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:19:16 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 17:08:10 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	size_t	i;
	size_t	array_size;
	int		*array;

	i = 0;
	array_size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * array_size);
	while (i < array_size)
	{
		array[i] = min;
		++i;
		++min;
	}
	return (array);
}
/*
int	main(void)
{
	int		*array;
	size_t	i;

	i = 0;
	array = ft_range(4, 9);
	while (i < 5)
	{
		printf("%d\n", array[i]);
		++i;
	}
	return (0);
}
*/
