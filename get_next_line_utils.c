/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:56:01 by dekhamid          #+#    #+#             */
/*   Updated: 2024/11/28 22:36:23 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	one;
	size_t	two;

	one = 0;
	two = 0;
	while (dst[one] && one < size)
		one++;
	while (src[two] && (one + two + 1) < size)
	{
		dst[one + two] = src[two];
		two++;
	}
	if (one < size)
		dst[one + two] = 0;
	return (one + ft_strlen((char *)src));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	one;
	size_t	two;

	one = 0;
	two = 0;
	while (src[one])
		one++;
	if (size != 0)
	{
		while (src[two] != 0 && two < (size - 1))
		{
			dst[two] = src[two];
			two++;
		}
		dst[two] = 0;
	}
	return (one);
}

char	*ft_strdup(const char *s)
{
	char	*d;
	int		l;
	int		x;

	x = 0;
	l = ft_strlen(s);
	d = (char *)malloc(sizeof(*d) * (l + 1));
	if (d == 0)
		return (0);
	while (x < l)
	{
		d[x] = s[x];
		x++;
	}
	d[x] = '\0';
	return (d);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (0);
}

static	size_t	ft_vibecheck(char const *s, unsigned int start, size_t len)
{
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	one;
	size_t	two;
	char	*ptr;

	one = 0;
	two = 0;
	len = ft_vibecheck((char *)s, start, len);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (0);
	while (s[one])
	{
		if (one >= start && two < len)
		{
			ptr[two] = s[one];
			two++;
		}
		one++;
	}
	ptr[two] = 0;
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		one;
	int		two;
	char	*dest;

	one = ft_strlen(s1);
	two = ft_strlen(s2);
	dest = malloc(sizeof(char) * (one + two + 1));
	if (dest == 0)
		return (0);
	ft_strlcpy(dest, s1, one + 1);
	ft_strlcat(dest, s2, one + two + 1);
	return (dest);
}