/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 09:46:26 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/17 16:19:44 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		idx;
	char		*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (tmp == NULL || !s || !f)
		return (NULL);
	idx = 0;
	while (idx < (ft_strlen((char *)s)))
	{
		tmp[idx] = f(idx, s[idx]);
		idx++;
	}
	tmp[idx] = '\0';
	return (tmp);
}
