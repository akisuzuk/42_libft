/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <XXX>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:25:57 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/26 19:50:54 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
//int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int	main(void)
//{
//	int	len;
//
//	len = ft_strlen("ab--cdef-gttt");
//	printf("len=%d", len);
//	return (0);
//}
