/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 09:43:22 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/16 09:44:20 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_find_len(int n)
{
        size_t len;
        int number;
        number = n;
        len = 0;
        if(number == 0)
                return (2);
        while (number != 0)
        {
                number = number/10;
                len++;
        }
        if (n < 0)
                return (len + 2);
        return (len + 1);
}
char *ft_itoa(int n)
{
        size_t array_length;
        char *ptr;
        size_t i;
        array_length = ft_find_len(n);
        i = array_length - 1;
//      printf("%lu" , array_length);
        ptr = (char *)malloc(sizeof(char) * array_length);
        if (ptr == NULL)
                return (NULL);
        ptr[i] = '\0';
        i = i - 1;
        if(n < 0)
        {
                ptr[0] = '-';
                n = n * -1;
        }
        while(n != 0)
        {
                ptr[i] = ((n % 10) + '0');
                //printf("%c = %lu \n" , ptr[i] , i);
                n = n / 10;
                i--;
        }
        //ptr[array_length] = '\0';
        return (ptr);
}
//
// 0  1  2  3  4
// -- -- -- -- --
// -  1  2  3 \0
/*iint main ()
{
        int i;
        char *ptr;
        i = -4353534;
        ptr = ft_itoa(i);
        printf("array is : %s" , ptr);
        return (0);
}*/
/*possible inputs
123
-123
+123
0
+12.5
null
-0
*/
