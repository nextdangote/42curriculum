/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguede <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 23:06:15 by aguede            #+#    #+#             */
/*   Updated: 2023/05/15 23:06:19 by aguede           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int signum, siginfo_t *info, void *context)
{
	static char	c;
	static int	i;

	if (signum == SIGUSR1)
	{
		c = (c << 1 | 1);
		i++;
	}
	if (signum == SIGUSR2)
	{
		c = c << 1;
		i++;
	}
	if ((i % 8) == 0)
	{
		write(1, &c, 1);
	}
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sa;

	sa.sa_sigaction = &sig_handler;
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&sa.sa_mask);
	pid = getpid();
	ft_printf("The process Identifier is %d\n", pid);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
	{
		ft_printf("arghhh something went wrong fam...\n");
		exit(1);
	}
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		ft_printf("arghhh something went wrong fam...\n");
		exit(1);
	}
	while (1)
		pause();
	return (0);
}
