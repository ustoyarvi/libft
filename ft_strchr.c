/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:47:33 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/17 22:49:57 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char s[] = "";
	int	c = '\0';

	printf("%p\n", (void *)ft_strchr(s, c));
	printf("%p\n", (void *)strchr(s, c));
	return (0);
}
*/
