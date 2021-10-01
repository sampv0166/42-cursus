/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apila-va <apila-va@42.abudhabi.ae>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:48:02 by apila-va          #+#    #+#             */
/*   Updated: 2021/09/30 15:52:26 by apila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		flag;
	int		ret;

	flag = 0;
	sign = 1;
	ret = 0;
	while (*str == ' ')
		str++;
	if (str[0] == '-')
	{
		sign = sign * -1;
		flag = 1;
		str++;
	}
	if (str[0] == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	if (flag == 1)
		return (-ret);
	return (ret);
}
