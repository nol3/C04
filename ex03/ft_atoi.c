/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:35:13 by acardena          #+#    #+#             */
/*   Updated: 2022/03/01 17:14:57 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	signo;

	i = 0;
	num = 0;
	signo = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * signo);
}
/*
#include <stdio.h>

int main(void)
{
	char	x[250] =  "  --+-+3654gdf8677";

	printf("%d\n", ft_atoi(x));
}*/
