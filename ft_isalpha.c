/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:32:00 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/04 20:49:43 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char a;
	char b;

	a = 'e';
	b = '6';
	printf("%d \n", ft_isalpha(a));
	printf("%d \n", isalpha(a));
	printf("%d \n", ft_isalpha(b));
	printf("%d \n", isalpha(b));
	return (0);
}
*/
