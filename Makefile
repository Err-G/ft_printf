# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 20:20:55 by ecarvalh          #+#    #+#              #
#    Updated: 2023/12/15 22:00:38 by anon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
RM		= rm -f
SDIR	= lib eval fun .
SRCS	= $(foreach dir,$(SDIR),$(wildcard $(dir)/ft_*.c))
ODIR	= objs
OBJS    = $(addprefix $(ODIR)/,$(notdir $(SRCS:.c=.o)))
CFLAGS	= -Wall -Wextra -Werror -I.
TARGET	= libftprintf.a

vpath %.c $(SDIR)

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rc $@ $^

$(ODIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

bonus: $(TARGET)

.PHONY: all clean fclean re
