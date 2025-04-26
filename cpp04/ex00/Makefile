NAME = Polymorphism

SRC = main.cpp Animal.cpp dog.cpp cat.cpp #WrongAnimal.cpp

INC = HEADERS/Animal.hpp HEADERS/dog.hpp HEADERS/cat.hpp  #HEADERS/WrongAnimal.hpp

OBJ = $(SRC:.cpp=.o)

CXX = c++


CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CXX) $(CXXFLAGS)  $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re