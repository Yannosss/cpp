##########   BASE   ##########
# File name
NAME = main

# Sources
SRCS += main.cpp
SRCS += Zombie.cpp
SRCS += zombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

HEADER += Zombie.hpp

INCLUDES_DIR =

LIB_INCLUDE = 

# Compilateurs
CC = c++
CFLAGS = -g3 -Wall -Wextra -std=c++98
#CFLAGS = -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	${CC} ${SRCS} -o ${NAME} ${CFLAGS} ${INCLUDES_DIR} ${LIB_INCLUDE}

%.o: %.cpp $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES_DIR)

# ajouter prise en compte pour compiler avec -j multithread sans risque d'effacer les .o pendant la compilation
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
