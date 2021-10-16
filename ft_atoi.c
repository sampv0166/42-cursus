/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:48:02 by apila-va          #+#    #+#             */
/*   Updated: 2021/10/16 21:33:01 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	unsigned	int		ret;

	sign = 1;
	ret = 0;
	while (*str == '\t' || *str == '\v' || *str == '\f' || \
		 *str == '\r' || *str == '\n' || *str == ' ')
	{
		str++;
	}
	if (str[0] == '-')
	{
		sign = sign * -1;
		str++;
	}
	if (str[0] == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	//if (ret == )
	return (sign*ret);
}

int main ()
{
	printf("%d", atoi("4294967298"));
	return (0);
}
