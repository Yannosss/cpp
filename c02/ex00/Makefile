##########   BASE   ##########
# File name
NAME = main

# Sources
SRCS += main.cpp
SRCS += Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

HEADER += Fixed.hpp

INCLUDES_DIR =

LIB_INCLUDE = 

# Compilateurs
CC = c++
#CFLAGS = -g3 -Wall -Wextra -std=c++98
CFLAGS = -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS} ${INCLUDES_DIR} ${LIB_INCLUDE}

%.o: %.cpp $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
