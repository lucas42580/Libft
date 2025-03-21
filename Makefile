# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaysant <lpaysant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 13:25:33 by lpaysant          #+#    #+#              #
#    Updated: 2025/03/21 15:39:59 by lpaysant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : clean fclean all re bonus

CFLAGS = -Wall -Wextra -Werror -I./inc -g
NAME = libft.a
CC = cc
SRCDIR = ./src
SRCIS = $(SRCDIR)/is
SRCLST = $(SRCDIR)/lst
SRCMEM = $(SRCDIR)/mem
SRCPRINT = $(SRCDIR)/print
SRCSTR = $(SRCDIR)/str
SRCUTILS = $(SRCDIR)/utils
OBJDIR = ./obj
SRC = \
	$(SRCIS)/ft_isalpha.c \
	$(SRCIS)/ft_isdigit.c \
	$(SRCIS)/ft_isalnum.c \
	$(SRCIS)/ft_isascii.c \
	$(SRCIS)/ft_isprint.c \
	$(SRCLST)/ft_lstnew_bonus.c \
	$(SRCLST)/ft_lstadd_front_bonus.c \
	$(SRCLST)/ft_lstsize_bonus.c \
	$(SRCLST)/ft_lstlast_bonus.c \
	$(SRCLST)/ft_lstadd_back_bonus.c \
	$(SRCLST)/ft_lstdelone_bonus.c \
	$(SRCLST)/ft_lstclear_bonus.c \
	$(SRCLST)/ft_lstiter_bonus.c \
	$(SRCLST)/ft_lstmap_bonus.c \
	$(SRCMEM)/ft_memset.c \
	$(SRCMEM)/ft_memcpy.c \
	$(SRCMEM)/ft_memmove.c \
	$(SRCMEM)/ft_memcmp.c \
	$(SRCMEM)/ft_memchr.c \
	$(SRCPRINT)/ft_putchar_fd.c \
	$(SRCPRINT)/ft_putstr_fd.c \
	$(SRCPRINT)/ft_putendl_fd.c \
	$(SRCPRINT)/ft_putnbr_fd.c \
	$(SRCPRINT)/ft_printf.c \
	$(SRCPRINT)/printfunction.c \
	$(SRCSTR)/ft_strlen.c \
	$(SRCSTR)/ft_strlcpy.c \
	$(SRCSTR)/ft_strlcat.c \
	$(SRCSTR)/ft_strchr.c \
	$(SRCSTR)/ft_strrchr.c \
	$(SRCSTR)/ft_strncmp.c \
	$(SRCSTR)/ft_strnstr.c \
	$(SRCSTR)/ft_calloc.c \
	$(SRCSTR)/ft_strdup.c \
	$(SRCSTR)/ft_substr.c \
	$(SRCSTR)/ft_strjoin.c \
	$(SRCSTR)/ft_split.c \
	$(SRCSTR)/ft_strtrim.c \
	$(SRCSTR)/ft_bzero.c \
	$(SRCSTR)/ft_strmapi.c \
	$(SRCSTR)/ft_striteri.c \
	$(SRCSTR)/get_next_line.c \
	$(SRCSTR)/get_next_line_utils.c \
	$(SRCUTILS)/ft_toupper.c \
	$(SRCUTILS)/ft_tolower.c \
	$(SRCUTILS)/ft_atoi.c \
	$(SRCUTILS)/ft_itoa.c

OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

all : $(OBJDIR) $(NAME)

$(OBJDIR) :
	mkdir -p $(OBJDIR)

$(NAME) : $(OBJ)
	ar rcs $@ $^

$(OBJDIR)/%.o : $(SRCDIR)/**/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)
fclean : clean
	rm -f $(NAME)
re : fclean all
