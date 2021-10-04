/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:11:34 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 08:28:33 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len )
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main ()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	char *s3 = "MZIRIBMZIRIBMZE123";
	char *s4 = "MZIRIBMZE";

	printf("%s",strnstr(s1,s2,9));
	printf("%s",ft_strnstr(s3,s4,9));

	return (0);
}*/

/*
DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of both strings.

     The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when
     portability is not a concern.

     While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.
*/
