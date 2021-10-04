/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:27:37 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/04 11:52:35 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_count(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if(s[i] == c)
		{
			j++;
		}
		i++;
	}
	return ( j + 1);
}

char **ft_allocate_memmory(char const *s,char c,char **ptr1)
{
	char *ptr;
	size_t len;
	char *memmory;
	size_t i;
	char **ptr2;

	len = 0;
	i = 0;
	ptr2 = ptr1;
	ptr = (char *) s;

	while(*ptr)
	{
		len  = 0;
		while(*ptr != c )
		{
			ptr++;
			len++;
		}
		memmory = malloc(len);
		if (memmory == 	NULL)
			return (NULL);
		ptr2[i] = memmory;
		i++;
		ptr++;
	}
	return (ptr2);
}

char **ft_split(char const *s, char c)
{
	char **ptr;
	size_t len;
	size_t i;

	len = ft_count(s,c);
	i = 0;
	ptr = (char**)malloc(sizeof(char*) * len);
	if (ptr == NULL)
		return NULL;
	ft_allocate_memmory(s,c,ptr);
	return (ptr);
}

int main(int argc , char **argv)
{
	char **ptr3;
	ptr3 = ft_split(argv[1], '.');
//	printf("%s" , ptr3[0]);
	return (0);
}
