/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/09 15:01:46 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//char	*search(const char *haystack, const char *needle, size_t len)
//{
//	int		i;
//	char	*ret;

//	i = 0;
//	while (*haystack && len)
//	{
//		if (*haystack == needle[0])
//		{
//			ret = (char *)haystack;
//			i = 0;
//			while (*haystack == needle[i] && len--)
//			{
//				i++;
//				haystack++;
//				if (!needle[i])
//					return (ret);
//			}
//			haystack -= i;
//			len += i;
//		}
//		haystack++;
//		len--;
//	}
//	return (NULL);
//}

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	char	*ret;

//	if (haystack == NULL)
//		return (NULL);
//	if (needle[0] == '\0')
//		return ((char *)haystack);
//	ret = search(haystack, needle, len);
//	if (ret)
//		return (ret);
//	else
//		return (NULL);
//}

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	i;
//	size_t	nlen;
//	char	c;

//	c = *needle;
//	if (c == '\0')
//		return ((char *)haystack);
//	nlen = ft_strlen(needle);
//	while (nlen <= len && haystack)
//	{
//		if (*haystack == c)
//		{
//			i = 0;
//			while (true)
//			{
//				if (i == nlen)
//					return ((char *)haystack);
//				if (haystack[i] != needle[i])
//					break ;
//				i++;
//			}
//		}
//	len--;
//	haystack++;
//	}
//	return (NULL);
//}


//int	main(void)
//{
//	char	str1[] = "aaabcabcd";
//	char	str2[] = "aabc";

//	//printf("%s\n", str1);
//	//printf("%s\n", str2);
//	//printf("origin ret = %s\n", strnstr(str1, "abcd", 9));
//	//printf("myfunc ret = %s\n", ft_strnstr(str1, "abcd", 9));
//	//printf("---case114---\n");
//	//printf("origin ret = %s\n", strnstr("", "", 0));
//	//printf("myfunc ret = %s\n", ft_strnstr("", "", 0));
//	//printf("---case115---\n");
//	printf("origin ret = %s\n", ft_strnstr("fake", NULL, 0));
//	printf("myfunc ret = %s\n", strnstr("fake", NULL, 0));
//	return (0);
//}


//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	int		i;
//	size_t	needle_len;

//	needle_len = strnlen(needle, len);
//	if (needle_len == 0)
//		return ((char *)haystack);
//	for (i = 0; i <= (int)(len - needle_len); i++)
//	{
//		if ((haystack[0] == needle[0]) && (0 == ft_strncmp(haystack, needle, needle_len)))
//			return ((char *)haystack);
//		haystack++;
//	}
//	return (NULL);
//}

//char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
//{
//	size_t	i;
//	size_t	nlen;
//	char	c;

//	c = *needle;
//	if (c == '\0')
//		return ((char *)haystack);
//	nlen = strlen(needle);
//	while (nlen <= len)
//	{
//		if (*haystack == c)
//		{
//			i = 0;
//			while (true)
//			{
//				if (i == nlen)
//					return ((char *)haystack);
//				if (haystack[i] != needle[i])
//					break ;
//				i++;
//			}
//		}
//	len--;
//	haystack++;
//	}
//	return (NULL);
//}
