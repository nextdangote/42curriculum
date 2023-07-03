/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguede <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:33:09 by aguede            #+#    #+#             */
/*   Updated: 2023/05/14 16:33:37 by aguede           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	allerenvoiechacal(char *s, int i)
{
	int	renvoie;

	renvoie = 0;
	while (s[i] >= 48 && s[i] <= 57)
	{
		renvoie = renvoie * 10 + s[i] - 48;
		i++;
	}
	return (renvoie);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	int		fdp;
	char	*s;

	s = (char *)str;
	sign = 1;
	i = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
	{
		i++;
	}
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	fdp = allerenvoiechacal(s, i);
	return (fdp * sign);
}

int	ft_strlen(const char *s)
{
	int	i;

	s = (char *) s;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
