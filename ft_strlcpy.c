/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 03:01:35 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 07:23:19 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (*src && i + 1 < dstsize)
	{
		*dest = *src;
		src++;
		dest++;
		i++;		
	}
	*dest = '\0';
	return (srclen);
}
/*
 DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output
     result as snprintf(3).  They are designed to be safer, more consistent, and less error prone replacements for
     the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is
     room.  Note that room for the NUL should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize
     is not 0.

     strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.
     It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice
     this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
     Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not
     entirely safe on some systems), the following two are equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

     Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to
     create.  For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst plus
     the length of src.

     If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to
     handle this.
 */
