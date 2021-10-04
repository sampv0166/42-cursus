/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 06:51:01 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 05:12:26 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{	
		if ((*(unsigned char *)ptr)  == ((unsigned char)c))
		{
			return ((void *)ptr);
		}
		i++;
		ptr++;
	}
	return (NULL);
}
/*int main(int argc, char **argv)
{
	if(memchr(argv[1],'h',2) != NULL)
	{	
		printf("%c",(*(unsigned char *) memchr(argv[1],'h',2)));		
	}

	if(ft_memchr(argv[2],'h',2) != NULL)
	{	
		printf("%c",(*(unsigned char *) ft_memchr(argv[2],'h',2)));		
	}
	//printf("%c",(*(unsigned char *) ft_memchr(argv[2],'h',2)));
	return (0);
}
*/
/*
 DESCRIPTION
     The memchr() function locates the first occurrence of c (converted
     to an unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or
     NULL if no such byte exists within n bytes.
 */
