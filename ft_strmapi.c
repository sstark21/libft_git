/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 13:34:57 by sstark            #+#    #+#             */
/*   Updated: 2018/12/26 13:34:59 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			c;
	char			*t;
	unsigned int	j;

	if (s == NULL || f == NULL)
		return (NULL);
	c = ft_strlen((char *)s);
	t = (char *)malloc((c + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);
	j = 0;
	while (j < c)
	{
		t[j] = f(j, s[j]);
		j++;
	}
	t[j] = '\0';
	return (t);
}
