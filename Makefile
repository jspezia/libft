# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jspezia <jspezia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/23 19:10:49 by jspezia           #+#    #+#              #
#    Updated: 2014/04/15 17:19:35 by jspezia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPATH	= src
OPATH	= obj
HPATH	= includes

CC		= cc $(FLAGS) $(XFLAGS)
FLAGS	= -Wall -Werror -Wextra
XFLAGS	= -g -O2

NAME	= "libft.a"

SRC		= ft_atoi.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strclr.c \
		  ft_strdel.c \
		  ft_strdup.c \
		  ft_strjoin.c \
		  ft_strlen.c \
		  ft_strnew.c \
		  ft_strsplit.c \
		  ft_strsub.c \
		  ft_strtrim.c \
		  ft_tabcpy.c \
		  get_next_line.c \
		  memalloc.c \
		  memcpy.c \
		  memset.c \
		  putstrnb.c \
		  putstrnb_fd.c \
		  strcat.c \
		  strchr.c \
		  strcmp.c \
		  strcpy.c \
		  striter.c \
		  strmap.c \
		  strstr.c \
		  toupper_lower.c \
		  what_is.c

CFILE	= $(patsubst %,$(CPATH)/%, $(SRC))
OFILE	= $(patsubst %.c,$(OPATH)/%.o, $(SRC))

# COLORS
C_NO	= "\033[00m"
C_GOOD	= "\033[32m"

all: $(NAME)

$(NAME): $(OPATH) $(OFILE)
	@ar rc $(NAME) $(OFILE)
	@ranlib $(NAME)
	@echo $(C_GOOD)Library create$(C_NO)

$(OPATH):
	@echo "Creation of building directory"
	@mkdir $(OPATH)

$(OPATH)/%.o: $(CPATH)/%.c
	@echo "Creating file $@"
	@$(CC) -o $@ -c $^ -I $(HPATH)

clean:
	@echo "Deletion of building directory"
	@rm -rf $(OPATH)

fclean: clean
	@echo "Deletion of $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
