/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:02:31 by sstark            #+#    #+#             */
/*   Updated: 2018/12/10 15:02:35 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(char *c, int i, size_t j)
{
	while (*c)
	{
		if (c[j] == i)
			return (c + j);
		j++;
	}
	return (NULL);
}