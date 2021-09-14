/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:38:00 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 22:23:29 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	len;
	int	nb;
	int	mult;
	int	neg;

	i = 0;
	len = 0;
	nb = 0;
	mult = 1;
	neg = 0;
	while (str[len] != '\0')
		len++;
	i = len - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb += (str[i] - 48) * mult;
		if (str[i] == '-')
			neg = 1;
		mult *= 10;
		len--;
		i--;
	}
	if (neg)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}
}

/* int	main(void)
{
	ft_putnbr(-112);
} */
