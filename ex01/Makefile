Name =  zombieHorde
CXX = c++ -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CXX) $(OBJ) -o $(Name)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re: fclean all

