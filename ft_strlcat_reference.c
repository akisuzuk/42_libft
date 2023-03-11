/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_reference.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:10:05 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/03/11 20:09:47 by akisuzuk         ###   ########.fr       */
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

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	if (!dst && src && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	i = 0;
	while (i + dst_len + 1 < dstsize && src[i] != '\0')
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[i + dst_len] = '\0';
	if (dst_len > dstsize)
		dst_len = dstsize;
	return (dst_len + ft_strlen(src));
}

size_t
strlcat(char * restrict dst, const char * restrict src, size_t maxlen) {
    const size_t srclen = strlen(src);
    const size_t dstlen = strnlen(dst, maxlen);
    if (dstlen == maxlen) return maxlen+srclen;
    if (srclen < maxlen-dstlen) {
        memcpy(dst+dstlen, src, srclen+1);
    } else {
        memcpy(dst+dstlen, src, maxlen-1);
        dst[dstlen+maxlen-1] = '\0';
    }
    return dstlen + srclen;
}


size_t strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    int d_len,s_len,offset,src_index;

    /* obtain initial sizes */
    d_len = strlen(dst);
    s_len = strlen(src);

    /* get the end of dst */
    offset = d_len;

    /* append src */
    src_index = 0;
    while( *(src+src_index) != '\0' )
    {
        *(dst+offset) = *(src+src_index);
        offset++;
        src_index++;
        /* don't copy more than dstsize characters
           minus one */
        if( offset==dstsize-1)
            break;
    }
    /* always cap the string! */
    *(dst+offset) = '\0';

    return( d_len+s_len );
}


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		addlen;
	size_t		dlen;

	d = dst;
	s = src;
	addlen = dstsize;
	while (addlen-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	addlen = dstsize - dlen;
	if (addlen == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (addlen != 1)
		{
			*d++ = *s;
			addlen--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}