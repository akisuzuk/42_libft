/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/11 00:09:53 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_length;
	size_t	remaining_size;
	size_t	d_length;
	size_t	copy_length;

	s_length = ft_strlen(src);
	remaining_size = dstsize;
	while (*dst && remaining_size > 0)
	{
		dst++;
		remaining_size--;
	}
	// Length of destination is the lesser of `size` and
	// offset of the null character, if any.
	d_length = dstsize - remaining_size;
	if (d_length < remaining_size)
	{
	// We know there is at least room to write the \0
		copy_length = remaining_size - 1;
		if (s_length < copy_length)
			copy_length = s_length;
		ft_memcpy(dst, src, copy_length);
		dst[copy_length] = '\0';
	}
	return (d_length + s_length);
}

//int	main(void)
//{
//	// あれっターミナルの検証がうまくいってなかったの、printfの書式とかが原因か。。。？
//	char			str1[] = "AAAAAAAAAA";
//	const char			str2[] = "BBB";

//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("ret = %zu\n", ft_strlcat(str1, str2, sizeof(str1)));
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("-------------\n");

//	char			str3[] = "AAAAAAAAAA";
//	char			str4[] = "BBB";
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	printf("ret = %zu\n", strlcat(str3, str4, sizeof(str3)));
//	printf("%s\n", str3);
//	printf("%s\n", str4);
//	return (0);
//}
