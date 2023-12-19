# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 11:59:07 by skorbai           #+#    #+#              #
#    Updated: 2023/12/19 11:00:07 by skorbai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	   		ft_bzero.c \
	   		ft_calloc.c \
	   		ft_isalnum.c	\
	   		ft_isalpha.c	\
	   		ft_isascii.c	\
	   		ft_isdigit.c	\
	   		ft_isprint.c	\
   	   		ft_itoa.c \
	   		ft_memchr.c \
	   		ft_memcmp.c	\
	   		ft_memcpy.c	\
	   		ft_memmove.c	\
	   		ft_memset.c	\
	   		ft_putchar_fd.c \
   	   		ft_putendl_fd.c \
   	   		ft_putnbr_fd.c \
	   		ft_putstr_fd.c \
	   		ft_split.c \
   	   		ft_strlcat.c \
	   		ft_strlcpy.c	\
	   		ft_strjoin.c	\
	   		ft_strrchr.c \
   	   		ft_strlen.c \
	   		ft_strchr.c	\
	   		ft_strdup.c	\
	   		ft_striteri.c \
   	   		ft_strnstr.c \
	   		ft_strncmp.c \
	   		ft_strmapi.c	\
	   		ft_strtrim.c \
	   		ft_substr.c \
	   		ft_toupper.c \
	   		ft_tolower.c 

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

bonus : .bonus

.bonus : $(OBJS) $(BONUS_OBJS)
	ar -rus $(NAME) $(OBJS) $(BONUS_OBJS)
	@touch .bonus

%.o: %.c
	cc $(C_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	@rm -rf .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus