/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 12:06:33 by sstark            #+#    #+#             */
/*   Updated: 2018/12/10 12:06:42 by sstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper(int c)
{
	if (c >= 141 && c <= 172)
		return (c);
	else if (c >= 101 && c <= 132)
	{
		c = c + 40;
		return (c);
	}
	else
		return (0);
}