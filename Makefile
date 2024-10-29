# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marwen <marwen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 06:28:15 by mbouaza           #+#    #+#              #
#    Updated: 2024/10/29 21:48:35 by marwen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Name --- #

NAME = libft.a

# --- Directory --- #

LIB_DIR = lib_dir/

OBJ_DIR = objs_dir/

# --- Compiler --- #

CC = @gcc

# --- Flags --- #

CFLAGS = -Wall -Werror -Wextra

# --- Srcs --- #

SRCS 	=	ft_calloc.c	\
			ft_isdigit.c \
			ft_memcmp.c \
			ft_putstr_fd.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_toupper.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_putchar_fd.c \
			ft_strchr.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_itoa.c \
			ft_memmove.c \
			ft_putendl_fd.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_substr.c \
			ft_bzero.c \
			ft_isascii.c \
			ft_memchr.c \
			ft_memset.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_strncmp.c \
			ft_tolower.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_strtrim.c \
			ft_split.c 

# --- Objs --- #

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

# --- Colors --- #

RED      =      "\033[1;31m"
GREEN    =      "\033[1;32m"
BLUE     =      "\033[0;34m"
PURPLE   =      "\033[1;35m"
END      =      "\033[0;0m"

# --- All --- #

all: $(LIB_DIR)$(NAME)

# --- Objs dir --- #

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# --- Compilation --- #

$(LIB_DIR)$(NAME) : $(OBJS)
	$(Compilation_lib)
	@mkdir -p $(LIB_DIR)
	@ar -rcs $(LIB_DIR)$(NAME) $(OBJS)

# --- Clear --- #

clean: Deleting_objs
	@rm -rf $(OBJ_DIR)

fclean: clean Deleting_lib
	@rm -rf $(LIB_DIR)$

re : fclean all

# --- Message --- #

Deleting_objs:
	@echo $(RED)"[-] Delete > ./$(OBJ_DIR)"$(END)

Deleting_lib:
	@echo $(RED)"[-] Delete > ./$(LIB_DIR)"$(END)

Compilation_lib = @for file in $(SRCS); do \
        printf $(BLUE)"[+] Compilation > "; \
        printf $(GREEN)"$$file"; \
        sleep 0.04; \
        printf "\r\033[K"; \
	done; \
    printf $(BLUE)"[+] Compilation > "; \
    echo $(GREEN)"Success"$(END);