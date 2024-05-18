/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:48:38 by tchobert          #+#    #+#             */
/*   Updated: 2024/05/14 18:56:57 by tchobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

static void	ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dup_str;

	dup_str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup_str != NULL)
	{
		ft_strcpy(dup_str, src);
	}
	return (dup_str);
}
