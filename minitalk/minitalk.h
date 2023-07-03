/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguede <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:10:27 by aguede            #+#    #+#             */
/*   Updated: 2023/05/06 14:10:29 by aguede           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINITALK_H
# define MINITALK_H

# include <bits/types/siginfo_t.h>
# include <signal.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include "ft_printf/ft_printf.h"

int	allerenvoiechacal(char *s, int i);
int	ft_atoi(const char *str);
int	ft_strlen(const char *s);

#endif
