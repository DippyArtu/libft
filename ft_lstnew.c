/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 15:21:45 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 16:22:54 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;
	char	*str;

	str = (char *)content;
	ptr = (t_list *)malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	if (!content)
	{
		ptr = ft_lstnull(ptr);
		return (ptr);
	}
	ptr->content = (char *)malloc(content_size);
	if (ptr->content == NULL)
		return (NULL);
	ptr->content = ft_strcpy(ptr->content, (char *)str);
	ptr->content_size = content_size;
	ptr->next = NULL;
	return (ptr);
}
