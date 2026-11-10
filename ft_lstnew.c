/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaria-r <smaria-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 13:55:37 by smaria-r          #+#    #+#             */
/*   Updated: 2026/11/10 13:35:12 by smaria-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lnew;

	lnew = malloc(sizeof(t_list));
	if (!lnew)
		return (NULL);
	lnew->content = content;
	lnew->next = NULL;
	return (lnew);
}

/*
int	main(void)
{
	t_list	*listI;
	char c = 'c';
	char *n = "olaaa";

	listI = malloc(sizeof(t_list));
	if (!listI)
	return (0);
	listI->content = &c;
	listI->next = ft_lstnew(n);

	printf("%p\n", &n);
	printf("%s\n", (char *)listI->next->content);
	return (0);
}
*/
