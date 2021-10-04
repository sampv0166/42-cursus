/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 02:43:45 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 09:07:31 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ptr;

	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (calloc(1, 1));

	ptr = substr;
	while (s[start] && len)
	{
		*substr = s[start];
		start++;
		len--;
		substr++;
	}
	*substr = '\0';
	return (ptr);
}

//int main()
//{
//	char s[] = "hello";
//	printf("%s" , ft_substr(s , 2 , 2));
//}
