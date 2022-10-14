##########   BASE   ##########
# File name
NAME = phonebook_launcher

# Sources
SRCS += phonebook_launcher.cpp
SRCS += PhoneBook.cpp
SRCS += Contact.cpp


OBJS = ${SRCS:.cpp=.o}


HEADER += phonebook_launcher.hpp
HEADER += PhoneBook.hpp
HEADER += Contact.hpp

INCLUDES_DIR =

LIB_INCLUDE = 

# Compilateurs
CC = c++
#CFLAGS = -g3 -Wall -Wextra -std=c++98
CFLAGS = -Wall -Wextra -Werror -std=c++98

##########   RULES   ##########

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	${CC} ${SRCS} -l readline -o ${NAME} ${CFLAGS} ${INCLUDES_DIR} ${LIB_INCLUDE}

%.o: %.c $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
