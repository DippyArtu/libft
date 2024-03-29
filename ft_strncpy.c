/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:36:26 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:16 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (n != 0 && src[i])
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	if (dest[i])
		ft_bzero(&dest[i], n);
	return (dest);
}
