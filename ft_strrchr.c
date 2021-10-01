/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 23:06:23 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/01 00:31:41 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char* ) s;
	len = 0;
	len = ft_strlen(str);
	while (len <= 0)
	{
		if (*(s + len) == c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	if (*s == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
