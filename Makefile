# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorbai <skorbai@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 11:59:07 by skorbai           #+#    #+#              #
#    Updated: 2023/11/08 17:06:22 by skorbai          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -c

C_FLAGS = -Wall -Wextra -Werror

AR = ar

AR_FLAGS = -rs

BONUS_AR_FLAGS = -rus

LIB_NAME = libft.a

C_FILES = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_toupper.c\
ft_tolower.c\
ft_strncmp.c\
ft_memset.c\
ft_bzero.c\
ft_strchr.c\
ft_strrchr.c\
ft_strnstr.c\
ft_memcpy.c\
ft_memchr.c\
ft_memcmp.c\
ft_memmove.c\
ft_strdup.c\
ft_atoi.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_itoa.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_calloc.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_strmapi.c\
ft_striteri.c\
ft_split.c\
ft_lstclear.c\
ft_lstiter.c

BONUS_C_FILES = ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c

C_FOLDER = ./

C_LOC = ${addprefix ${C_FOLDER}, ${C_FILES}}

BONUS_C_LOC = ${addprefix ${C_FOLDER}, ${BONUS_C_FILES}}

O_FILES = ${C_LOC:.c=.o}

BONUS_O_FILES = ${BONUS_C_LOC:.c=.o}

.c.o:
	${CC} ${C_FLAGS} $< -o ${<:.c=.o}

${LIB_NAME}: ${O_FILES}
	${AR} ${AR_FLAGS} ${LIB_NAME} ${O_FILES}

.PHONY: all clean fclean re bonus

all: ${LIB_NAME}

clean:
	rm -f ${O_FILES} ${BONUS_O_FILES}
	@rm -rf .bonus

fclean:
	make clean
	rm -f ${LIB_NAME}

re:
	make fclean
	make all

bonus: .bonus

.bonus: ${O_FILES} ${BONUS_O_FILES}
	${AR} ${BONUS_AR_FLAGS} ${LIB_NAME} ${O_FILES} ${BONUS_O_FILES}
	@touch .bonus