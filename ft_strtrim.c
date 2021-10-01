/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 03:54:55 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/01 18:32:29 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getendindex(char const *s1, char const *set)
{	
	char	*str;
	char	*ch;
	size_t	i;

	str = (char *) s1;
	ch = (char *) set;
	i = strlen(str) - 1 ;
	while (str[i])
	{
		if (strrchr(ch, str[i]) == NULL)
		{
			return (i);
		}
		i--;
	}
	i = 0;
	return (i);
}

size_t	getstartindex(char const *s1, char const *set)
{
	char	*str;
	char	*ch;
	size_t	i;

	str = (char *) s1;
	ch = (char *) set;
	i = 0;
	while (str[i])
	{
		if (strchr(ch, str[i]) == NULL)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		startindex;
	size_t		endindex;
	size_t		size;
	char		*trimmedstr;
	char		*ptr;

	endindex = 0;
	startindex = 0;
	size = endindex - startindex;
	startindex = getstartindex(s1, set);
	endindex = getendindex(s1, set) + 1;
	trimmedstr = malloc(sizeof(char ) * size + 1);
	if (trimmedstr == NULL)
		return (NULL);
	ptr = trimmedstr;
	while (startindex < endindex)
	{
		*trimmedstr = s1[startindex];
		startindex++;
		trimmedstr++;
	}
	*trimmedstr = '\0';
	return (ptr);
}

/*int main ()
{
	char s1[] = "etdecctechktcetch";
	char set[] = "tech";

	ft_strtrim2(s1 , set);
	printf("%s" , ft_strtrim2(s1 , set));
	return (0);
}*/
