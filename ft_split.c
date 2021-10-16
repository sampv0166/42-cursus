/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 07:53:59 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/16 09:57:47 by apila-va         ###   ########.fr       */
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
                        i++;
                }
				else if (s[i] != c)
				{
					while(s[i] != c)
					{
						i++;
					}
					j++;
				}
        }
        if(j == 0)
                return (2);
        return ( j + 1);
}
/*char *ft_create_string(size_t string_len, size_t start, char *str)
{
        size_t;
        return (ptr);
}*/
char **ft_split(char const *s, char c)
{
        char **ptr;
        size_t first_array_length;
        size_t string_length;
        size_t first_array_index;
        size_t string_index;
        string_length = 0;
        first_array_index = 0;
        string_index = 0;
        first_array_length = ft_count(s,c);
//      	printf("%lu \n", first_array_length);
        ptr = (char**)malloc(sizeof(char*) * first_array_length + 1);
        while(s[string_index])
        {
//              printf("\n %c" , s[string_index]);
                if(s[string_index] != c )
                {
						while(s[string_index] != c)
						{
							string_index++;
							string_length++;
						}
	//                    printf("\n inside if");
                        ptr[first_array_index++] = ft_substr(s,string_index-string_length,string_length);
                        //string_index++;
                        string_length = 0;
                }
                string_index++;
        }
        ptr[first_array_index++] = ft_substr(s, string_index-string_length,string_length + 1);
        //ptr[first_array_index++][0] =  '\0' ;
//      printf("\n everythig is ok");
        return (ptr);
}

/*int main(int argc , char **argv)
{
        char **ptr3;
ptr3 = ft_split("split  ||this|for|me|||||!|",'|');
       // ptr3 = ft_split("      split       this for   me  !       ",' ');
       // ptr3 = ft_split(argv[1], '.');
        size_t i;
        i = 0;
        while(ptr3[i])
        {
                printf("%s,\n" , ptr3[i]);
                i++;
        }
        return (0);
}*/
