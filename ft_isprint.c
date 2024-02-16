/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:29:07 by dsedlets          #+#    #+#             */
/*   Updated: 2024/01/29 21:36:03 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a, b, c;

	a = '1';
	b = 127;
	c = 25;
	printf("%d \n", ft_isprint(a));
	printf("%d \n", isprint(a));
	printf("%d \n", ft_isprint(b));
	printf("%d \n", isprint(b));
	printf("%d \n", ft_isprint(c));
	printf("%d \n", isprint(c));
}
*/
