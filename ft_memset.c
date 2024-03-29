/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:07:38 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/18 23:56:36 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

//	if (!b)
//		return (NULL);
	a = b;
	i = 0;
	while (i < len)
	{
		*a++ = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char b[] = "1234";
	int c1 = 97;
	size_t len1 = 3;
	char d[] = "1234";
	int c2 = 97;
	size_t len2 = 3;

	printf("1 .  %s \n", (char *)ft_memset(b, c1, len1));
	printf("2 .  %s \n", (char *)memset(d, c2, len2));
/*	char x1[] = "1";
	int y1 = 97;
	size_t len3 = 7;
	char x2[] = "1";
	int y2 = 97;
	size_t len4 = 7;

	printf("3 .  %s \n", (char *)ft_memset(x1, y1, len3));
	printf("4 .  %s \n", (char *)memset(x2, y2, len4));*/
	return (0);
}
