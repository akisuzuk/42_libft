/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 19:40:43 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n);

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

//
//int	main(void)
//{
//	char	str1[256];
////	char	str2[256];
//	int		n;
//
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = 'd';
//	str1[4] = 'e';
//	str1[5] = '\0';
////	str2[0] = 'A';
////	str2[1] = 'B';
////	str2[2] = 'C';
////	str2[3] = '\0';
//	n = 0;
//	printf("str1=%s\n", str1);
//	//ft_memset(str1+1, 1, 2);
//	ft_bzero(str1+1, 2);
//	printf("str1=%s\n", str1);
//	printf("------------\n");
//	return (0);
//}
//
