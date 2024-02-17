/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:58:33 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/18 00:13:50 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (!haystack || !needle)
		return (0);
	if (len < needle_len)
		return (0);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len - needle_len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *haystack = "Hello World!";
	char *needle = "ell";
	size_t len = strlen(haystack);

	char *result = ft_strnstr(haystack, needle, len);
	printf("%s\n", result);
	return (0);
*/
