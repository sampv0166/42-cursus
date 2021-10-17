/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:02:58 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/17 20:52:14 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	i = dstlen;
	if (dstsize == 0)
		dstlen = srclen;
	if (dstsize > dstlen)
		dstlen = dstlen + srclen;
	else
		dstlen = srclen + dstsize;
	while (*dst)
		dst++;
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		i++;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dstlen);
}
/*size_t ft_strlcat2(char *dst, const char *src, size_t siz)
{
    size_t i;
    size_t j;
    size_t k;
    i = ft_strlen((char *)src);
    j = 0;
    k = 0;

    if(siz < (size_t)ft_strlen(dst))
        i += siz;
    else
        i += ft_strlen(dst);
    while(dst[j] != '\0')
        {
            j++;
            siz--;
        }
    while(src[k] != '\0' && ((siz - 1) > 0))
    {
        dst[j++] = src[k++];
        siz--;
    }
    dst[j] = '\0';
    return (i);
}

int main()
{
	char	*dest;
	//char src[20] = "world";

	//char dest1[20] = "helloi";
	//char src1[20] = "world";

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 'r', 15);
	//printf("mine : %lu , %s \n" ,strlcat(dest , src , 20) ,  dest);	
	printf("system : %lu , %s" ,ft_strlcat(dest , "lorem ipsum dolor sit amet" , 5) ,  dest);
	return (0);
}*/
