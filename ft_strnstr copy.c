/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:40:49 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/07 21:44:15 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>
# include <signal.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>
# include <time.h>
# include <stdbool.h>
# include <sys/types.h>
# include <sys/wait.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*search(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*ret;

	i = 0;
	while (*haystack != '\0' && len)
	{
		if (*haystack == needle[0])
		{
			ret = (char *)haystack;
			i = 0;
			while (*haystack == needle[i] && len--)
			{
				if (needle[i + 1] == '\0')
					return (ret);
				i++;
				haystack++;
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
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	ret = search(haystack, needle, len);
	if (ret)
		return (ret);
	else
		return (NULL);
}

//
//int	main(void)
//{
//	char	BFSIZE;
//	size_t	size = BFSIZE * 4;
//	char	*s2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
//	char	*s1 = malloc(size + 1);
//
//	memset(s1, 'A', size);
//	s1[size] = 0;
//	printf("origin=%s\n", strnstr(s1, s2, size)); 
//	printf("ft=%s\n", ft_strnstr(s1, s2, size)); 
//}
//
