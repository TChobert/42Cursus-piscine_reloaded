##### VARIABLES #####

## TARGET ##

NAME := ft_display_file

## COMPILATION ##

CC := cc

CFLAGS += -Wall 
CFLAGS += -Werror
CFLAGS += -Wextra

## SOURCES ##

SRCS += main.c
SRCS += ft_display_file.c
SRCS += ft_display_file_utils.c

## HEADER ##

HEADERS += ft_display_file.h

## OBJETS ##

OBJS_DIR := .

OBJS := $(patsubst %.c, %.o, $(SRCS))

## RULES ##

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(HEADERS)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADERS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
