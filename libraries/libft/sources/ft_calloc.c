/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:11:42 by tkomeno           #+#    #+#             */
/*   Updated: 2022/10/27 16:37:53 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;
	size_t	size_max;

	size_max = (size_t)(~(size_t)0x00);
	if (size != 0 && count > size_max / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = malloc(count * size);
	if (b)
		ft_bzero(b, count * size);
	return (b);
}
