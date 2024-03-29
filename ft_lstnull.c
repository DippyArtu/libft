/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 15:44:32 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:10 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnull(t_list *ptr)
{
	if (!ptr)
		return (NULL);
	ptr->content = NULL;
	ptr->content_size = 0;
	ptr->next = NULL;
	return (ptr);
}
