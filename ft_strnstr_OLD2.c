/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr copy 2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/09 16:14:48 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*search(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[0])
		{
			ret = (char *)haystack;
			i = 0;
			while (*haystack == needle[i] && len--)
			{
				i++;
				haystack++;
				if (!needle[i])
					return (ret);
			}
			haystack -= i;
			len += i;
		}
		haystack++;
		len--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ret;

	if (haystack == NULL)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);

	// わかった。nullを関数の引数に渡した時点でセグフォになるっぽいので、
	// 関数を分割して、渡した先でnullチェックすることができないのか
	ret = search(haystack, needle, len);
	if (ret)
		return (ret);
	else
		return (NULL);
}

//
//int	main(void)
//{
//	char	str1[] = "aaabcabcd";
//	char	str2[] = "aabc";
//
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("origin ret = %s\n", strnstr(str1, "abcd", 9));
//	printf("myfunc ret = %s\n", ft_strnstr(str1, "abcd", 9));
//	printf("---case114---\n");
//	printf("origin ret = %s\n", strnstr("", "", 0));
//	printf("myfunc ret = %s\n", ft_strnstr("", "", 0));
//	printf("---case115---\n");
//	printf("origin ret = %s\n", strnstr(NULL, "1", 0));
//	printf("myfunc ret = %s\n", ft_strnstr(NULL, "1", 0));
//	return (0);
//}
//
