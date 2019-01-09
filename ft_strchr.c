/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:48:47 by sstark            #+#    #+#             */
/*   Updated: 2018/12/10 17:48:49 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*first_chr;
	int		i;

	i = 0;
	first_chr = NULL;
	while (str[i] != ch)
		i++;
	return (first_chr = (char *)(str + i));
}
