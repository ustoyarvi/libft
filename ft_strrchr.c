/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:50:11 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/13 01:20:13 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)&s[j]);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "bcdaefa";
	int c = 'b';

	printf("%p\n", ft_strrchr(s, c));
	printf("%p\n", strrchr(s, c));
	return (0);
}
*/
