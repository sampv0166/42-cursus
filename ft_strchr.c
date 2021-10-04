/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:06:47 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 05:38:35 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

/*int main(int argc, char **argv)
{
	printf("%s",ft_strchr(argv[1],'c'));
		return (0);
}*/

/*DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the
     string pointed to by s.  The terminating null character is considered to be part of
     the string; therefore if c is `\0', the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence
     of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or
     NULL if the character does not appear in the string.*/
