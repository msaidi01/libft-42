
NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -rf

LIBFT_H = libft.h

MANDATORY = ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_isalnum.c\
			 ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c\
			ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_toupper.c\
			ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c

BNS = ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstsize.c ft_lstmap.c

OBJECTS = $(MANDATORY:.c=.o)

OBJECTSB = $(BNS:.c=.o)

$(NAME) :  $(OBJECTS)
			$(AR) $@ $^

%.o : %.c  $(LIBFT_H)
		$(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

bonus : $(OBJECTSB)
	$(AR) $(NAME) $^

clean : 
		$(RM) $(OBJECTS) $(OBJECTSB)

fclean : clean
		$(RM) $(NAME)

re : fclean all bonus

.PHONY : all bonus clean fclean re
