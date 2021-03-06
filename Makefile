# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcornil <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 13:48:02 by jcornil           #+#    #+#              #
#    Updated: 2019/07/15 13:48:04 by jcornil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_strcmp.c ft_strncmp.c\
		ft_strcat.c ft_strncat.c\
		ft_strlcat.c ft_strcpy.c\
		ft_strncpy.c ft_isdigit.c\
		ft_isalpha.c ft_atoi.c\
		ft_strdup.c ft_strlen.c\
		ft_strstr.c ft_isascii.c\
		ft_isprint.c ft_isalnum.c\
		ft_strnstr.c ft_memcmp.c\
		ft_bzero.c ft_toupper.c\
		ft_tolower.c ft_toupper.c\
		ft_memcpy.c ft_memset.c\
		ft_memccpy.c ft_strchr.c\
		ft_strrchr.c ft_memmove.c\
		ft_memchr.c ft_putchar.c\
		ft_putchar_fd.c ft_itoa.c\
		ft_nsize.c ft_itoa.c\
		ft_memalloc.c ft_memdel.c\
		ft_strnew.c ft_strdel.c\
		ft_strclr.c	ft_striter.c\
		ft_striteri.c ft_strmap.c\
		ft_strequ.c ft_strnequ.c\
		ft_strmapi.c ft_strsub.c\
		ft_strjoin.c ft_strtrim.c\
		ft_putstr.c ft_putstr_fd.c\
		ft_putnbr.c ft_putnbr_fd.c\
		ft_putendl.c ft_putendl_fd.c\
		ft_strsplit.c ft_count_words.c\
		ft_lstnew.c ft_lstdelone.c\
		ft_lstdel.c ft_lstmap.c\
		ft_lstadd.c ft_lstiter.c\
		ft_base.c ft_value_of.c\
		ft_atoi_base.c ft_sqrtint.c\
		get_next_line.c\

HEADERS = libft.h

OBJECT = $(SOURCES:.c=.o)

$(NAME):
	@echo "Compilation..."
	@gcc $(FLAGS) -c $(SOURCES) $(HEADERS)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "Compilation\t\t\033[0;32m[OK]\033[0m"

all: $(NAME)

clean:
	@rm -rf $(OBJECT)
	@echo "Cleaning Objects\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "Cleaning .a\t\t\033[0;32m[OK]\033[0m"

re: fclean all