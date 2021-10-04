/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:49:11 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 04:32:10 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	size_t srclen;
	size_t destlen;

	srclen = 0;
	destlen = 0;
	i = 0;
	if (dest == src || !len)
		return (dest);
	if (src < dest)
	{
		while (i < len)
		{
	//	printf("%c = %c\n",*((char *)dest + (len - 1) ) , *((char *)src + (len - 1) ) );
	//	return (0);
		*((char *)dest + (len -1)) = *((char *)src + (len - 1) );
	//	destlen++;
	//	srclen++;
	//	i++;
		len--;
		}
	}
	else
	{
//		printf("memcopying \n");
		ft_memcpy(dest, src, len);
	}
	return (dest);
}


/*int main (int argc,char **argv)
{
	char src[] = "hellomm";
	char dest[] = "world";

	char src1[] = "hello";
	char dest2[] = "world";
	
	ft_memmove(dest,src,2);
	memmove(dest2,src1,2);

//	ft_memmove(src + 5 ,src ,0);
//	memmove(src + 5,src,0);

	printf("%s\n", dest);
	printf("%s", dest2);
	return (0);
}*/
/*
 DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  The two
     strings may overlap; the copy is always done in a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.
 */
