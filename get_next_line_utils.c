/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:56:01 by dekhamid          #+#    #+#             */
/*   Updated: 2024/11/27 20:33:03 by dekhamid         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	const char	*bols;

	bols = 0;
	while (*s)
	{
		if (*s == (char)c)
			bols = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)bols);
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
