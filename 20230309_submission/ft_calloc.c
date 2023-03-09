/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:38:00 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/02/28 21:26:18 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

//
//int	main(void)
//{
//	char	*ch;
//	char	*ft_ch;
//
//	ft_ch = (char *)ft_calloc(SIZE_MAX, 0);
//	ch = (char *)calloc(1, 100);
//	free(ft_ch);
//	free(ch);
//	return (0);
//}
//
