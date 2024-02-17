/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:25:05 by dsedlets          #+#    #+#             */
/*   Updated: 2024/02/17 20:05:18 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (src[i] != '\0' && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "Hello, ";
	char	dst_ft[20] = "Hello, ";
	const char	*src = "world";

	size_t	len = strlcat(dst, src, 1);
	size_t	len_ft = ft_strlcat(dst_ft, src, 1);
	printf("%s\n", dst);
	printf("%s\n", dst_ft);
	printf("len %zu\n", len);
	printf("len_ft %zu\n", len_ft);
	return (0);
}
*/
