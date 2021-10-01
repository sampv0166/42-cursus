/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:49:11 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/01 19:03:27 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	size_t srclen;
	size_t destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	if (dest == src || !len)
		return (dest);
	if (src < dest)
	{	
		while (i < len)
		{
		printf("src < dest");
		*((char *)dest + destlen) = *((char *)src + srclen);
		destlen--;
		srclen--;
		i++;
		}
	}
	else
	{
		printf("memcopying");
		ft_memcpy(dest, src, len);
	}
	return (dest);
}

int main (int argc,char **argv)
{
	char s1[] = "hello";
	char s2[] = "world";

	char s11[] = "hello";
	char s22[] = "world";
	
	ft_memmove(s1,s2,2);
	memmove(s11,s22,2);

	printf("%s\n", s1);
	printf("%s", s11);
	return (0);
}
/*
 DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  The two
     strings may overlap; the copy is always done in a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.
 */
