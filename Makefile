# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: czambran <czambran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 12:52:35 by czambran          #+#    #+#              #
#    Updated: 2020/01/05 19:56:58 by czambran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_iswhitespace.c \
ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_strcat.c \
ft_strchr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strstr.c \
ft_tolower.c \
ft_toupper.c \
ft_strnew.c \
ft_strdel.c \
ft_strclr.c \
ft_striter.c \
ft_striteri.c \
ft_strmap.c \
ft_strmapi.c \
ft_strequ.c \
ft_strsub.c \
ft_strjoin.c \
ft_strtrim.c \
ft_find_word.c \
ft_count_words.c \
ft_strsplit.c \
ft_itoa.c \
ft_strrev.c \
ft_putchar.c \
ft_putstr.c \
ft_putendl.c \
ft_putnbr.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strlcpy.c \
ft_split.c \
ft_substr.c \
ft_strtrim.c \
ft_calloc.c \

BONUS= $(SRC) ft_lstnew_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstlast_bonus.c \
ft_lstclear_bonus.c \
ft_lstsize_bonus.c

OBJ = $(subst .c,.o,$(SRC))
BONUS_OBJ = $(subst .c,.o,$(BONUS))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

OBJ: $(subst .o,.c,$(SRC))
		gcc -c $(CFLAGS) $(SRC)

bonus:
		gcc $(CFLAGS) -c $(BONUS)
		ar rc $(NAME) $(BONUS_OBJ)
		ranlib $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ) $(BONUS_OBJ)
	
fclean: clean
		rm -f $(NAME)

re: fclean all

main : main.c libft.a
		gcc -Wall -Wextra -Werror main.c libft.a

.PHONY: clean fclean all re
