/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:20:44 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/17 20:05:38 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	if (!str)
		return (0);
	while (*str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+')
		str++;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char *a = "-465";
	int b;

	b = ft_atoi(a);
	printf("%d\n", b);
	return (0);
}*/
