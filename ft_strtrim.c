/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:40:53 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 19:57:54 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char)c;
	while (*s)
	{
		if (*s == char_c)
			return ((char *)s);
		s++;
	}
	if (c == 0 && *s == c)
		return ((char *)s);
	return (NULL);
}

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	int				int_n;
	unsigned char	*unchar_s;

	if (n != 0)
	{
		int_n = (int)n;
		unchar_s = (unsigned char *)s;
		i = 0;
		while (i < int_n)
		{
			*unchar_s++ = '\0';
			i++;
		}
		return (unchar_s);
	}
	return (s);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count > SIZE_MAX / size)
		return (NULL);
	p = (void *)malloc(count * size);
	ft_bzero(p, count * size);
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	head;
	size_t	tail;

	if (!s1 || !set)
		return (NULL);
	if (!set || s1[0] == '\0')
		return (ft_calloc(1, 1));
	head = 0;
	while (ft_strchr(set, s1[head]))
		head++;
	tail = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[tail]) && head < tail)
		tail--;
	if (head <= tail)
		ret = malloc(sizeof(char) * (tail - head + 1));
	if (tail < head || !ret)
		return (ft_calloc(1, 1));
	i = 0;
	while (head <= tail)
		ret[i++] = s1[head++];
	ret[i] = '\0';
	return (ret);
}

// int	main(void)
// {
// 	char	str1[] = "   xxx   xxx";
// 	char	str2[] = " x";
// 	char	*joined;
// 	printf("str1=%s\n", str1);
// 	printf("str2=%s\n", str2);
// 	joined = ft_strtrim(str1, str2);
// 	printf("ret=%s\n", joined);
// 	//printf("strcmp=%d\n", strcmp(joined, "42"));
// 	free(joined);
// }
