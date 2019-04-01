##
## ETNA PROJECT, 2019 by koster_m
## Lib
## File description:
##      Library
##

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror -fPIC
RM					=	rm -f
OBJ					=	$(SRC:.c=.o)
NAME				=	libmy_printf_`uname -m`-`uname -s`

STATIC				=	$(NAME).a
AR_S				=	ar -rcs $(STATIC) $(OBJ)
RANLIB				=	ranlib $(STATIC)

DYNAMIC				=	$(NAME).so
CLIB                =   gcc $(CFLAGS) -shared -Wl,-soname=$(DYNAMIC) -o $(DYNAMIC) *.o


SRC					=	\
						my_putchar.c \
						my_putstr.c \
						my_putnbr.c \
						my_strlen.c \
						put_unsigned.c \
						my_putnbr_base.c \
						my_puthexa.c \
						my_printf.c

all					:	my_printf_static my_printf_dynamic

my_printf_static	:	$(OBJ)
						$(AR_S)
						$(RANLIB)

my_printf_dynamic	:
						$(CLIB)

clean				:
						$(RM) $(OBJ)

fclean				:	clean
						$(RM) $(STATIC)
						$(RM) $(DYNAMIC)

re					:	fclean all

.PHONY				:	all

