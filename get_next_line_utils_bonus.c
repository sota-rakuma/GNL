/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srakuma <srakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:59:53 by srakuma           #+#    #+#             */
/*   Updated: 2021/05/03 23:59:56 by srakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	int		i;
	char	*str;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	i = -1;
	while (++i < (int)len)
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *start, char const *end)
{
	char	*ptr;
	char	*tmp;
	int		len;
	int		i;

	if (!start || !end)
		return (0);
	len = 0;
	tmp = (char *)start;
	while (tmp++ != end)
		len++;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == 0)
		return (0);
	i = -1;
	while (++i < (int)len)
		ptr[i] = start[i];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = ft_strlen(s) + 1;
	ch = (unsigned char)c;
	while (i > 0)
	{
		if (*s == ch)
			return ((char *)s);
		i--;
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	int		i;

	if (s1 == 0 && s2 == 0)
		return (ft_strdup(""));
	if (s1 == 0)
		return (ft_strdup(s2));
	if (s2 == 0)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == 0)
		return (0);
	i = -1;
	while (++i < (int)len1)
		ptr[i] = s1[i];
	while (++i < (int)(len1 + len2 + 1))
		ptr[i - 1] = s2[i - (int)len1 - 1];
	ptr[i - 1] = '\0';
	return (ptr);
}
