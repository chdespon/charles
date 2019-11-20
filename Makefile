# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 17:12:37 by chdespon          #+#    #+#              #
#    Updated: 2019/11/15 11:06:42 by chdespon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strlen.c ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strnstr.c ft_strncmp.c ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strjoin.c \
 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strtrim.c  \
ft_putnbr_fd.c ft_memccpy.c ft_strmapi.c ft_itoa.c ft_split.c ft_substr.c \

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstclear.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \

INCLUDE = /libft.h

GCC = gcc -Wall -Wextra -Werror -c

.c .o:
		$(GCC)  -I $(INCLUDE) -o $@ -c $<

$(NAME): $(OBJS) 
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

bonus:  $(NAME) $(OBJS_BONUS)
		@ar rc $(NAME) $(OBJS_BONUS)
		@ranlib $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
