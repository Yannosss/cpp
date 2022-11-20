##########   BASE   ##########
# File name
NAME = main

# Sources
SRCS += main.cpp
SRCS += Bureaucrat.cpp
SRCS += Form.cpp
SRCS += ShrubberyCreationForm.cpp
SRCS += RobotomyRequestForm.cpp
SRCS += PresidentialPardonForm.cpp
SRCS += Intern.cpp


OBJS = ${SRCS:.cpp=.o}

HEADER += Bureaucrat.hpp
HEADER += Form.hpp
HEADER += ShrubberyCreationForm.hpp
HEADER += RobotomyRequestForm.hpp
HEADER += PresidentialPardonForm.hpp
HEADER += Intern.hpp

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

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
