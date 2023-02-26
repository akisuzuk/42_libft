/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 19:49:41 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

/*
int	main(void)
{
	// あれっターミナルの検証がうまくいってなかったの、printfの書式とかが原因か。。。？
	char			str1[] = "AAAAAAAAAA";
	const char			str2[] = "BBB";

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("ret = %zu\n", ft_strlcat(str1, str2, sizeof(str1)));
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("-------------\n");

	char			str3[] = "AAAAAAAAAA";
	char			str4[] = "BBB";
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("ret = %zu\n", strlcat(str3, str4, sizeof(str3)));
	printf("%s\n", str3);
	printf("%s\n", str4);
	return (0);
}
*/

/*
int	main(void)
{
	char	dest[10];
	char	src[];
	int		i;
	char	dest[10];
	char	dest[10];

	dest[10] = "abc";
	src[] = "def";
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc"; printf("--------------\n");
		printf("i = %d, \tstrlcat = %lu\n", i, strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	printf("======================\n");
	i = 0;
	while (i < 11)
	{
		dest[10] = "abc";
		printf("--------------\n");
		printf("i = %d, \tft_strlcat = %u\n", i, ft_strlcat(dest, src, i));
		printf("dest= %s\n", dest);
		i++;
	}
	return (0);
}
*/
