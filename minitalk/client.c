/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguede <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:05:50 by aguede            #+#    #+#             */
/*   Updated: 2023/05/15 23:06:00 by aguede           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	char_to_bin(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(100);
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	pid_t	pid;
	char	*message;
	int		i;

	if (argc != 3)
	{
		ft_printf("like that cutie <client> <%d> <your love message>\n", pid);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	while (i <= ft_strlen(message))
	{
		char_to_bin(message[i], pid);
		i++;
	}
	char_to_bin('\0', pid);
	return (0);
}
