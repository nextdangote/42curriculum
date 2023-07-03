# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguede <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 14:10:15 by aguede            #+#    #+#              #
#    Updated: 2023/05/06 14:10:17 by aguede           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FT_PRINTF = ft_printf/ft_printf.a

CC = cc
CCFLAGS = cc -Wall -Werror -Wextra

SERVER = server
CLIENT = client
MINITALK_UTILS = minitalk_utils
SRCS_SERVER = server.c
SRCS_CLIENT = client.c
SRCS_MINITALK_UTILS = minitalk_utils.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_MINITALK_UTILS = $(SRCS_MINITALK_UTILS:.c=.o)

all: $(SERVER) $(CLIENT)

$(FT_PRINTF):
		@make -C ft_printf

$(SERVER) $(CLIENT) $(MINITALK_UTILS): $(OBJS_SERVER) $(OBJS_CLIENT) $(OBJS_MINITALK_UTILS) $(FT_PRINTF)
		${CCFLAGS} ${OBJS_SERVER} -I include ft_printf/ft_printf.a -o ${SERVER}
		${CCFLAGS} ${OBJS_CLIENT} ${OBJS_MINITALK_UTILS} -I include ft_printf/ft_printf.a -o ${CLIENT}

clean:
		@make clean -C ft_printf
		rm -rf ${OBJS_SERVER} ${OBJS_CLIENT} ${OBJS_MINITALK_UTILS}

fclean:	clean
		@make fclean -C ft_printf
		rm -rf $(SERVER) $(CLIENT) $(MINITALK_UTILS)

re:	fclean all
