NAME = libftprintf.a

AR = ar
ARFLAGS = crs

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES =	./ft_printf.h

SRCS	=	ft_printf.c \
			ft_printf_char.c \
			ft_printf_num.c \

OBJS = $(SRCS:.c=.o)

%.o: %.c $(INCLUDES)
		$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)				

clean :
		$(RM) $(RMFLAG) $(OBJS)

fclean : clean
		$(RM) $(RMFLAG) $(NAME)

re : fclean all

.PHONY : all clean fclean re