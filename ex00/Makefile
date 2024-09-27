Name =  BraiiiiiiinnnzzzZ
GCC = gcc -Wall -Wextra -Werror -std=c++98
SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(GCC) $(OBJ) -o $(Name)

%.o: %.cpp
	$(GCC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re: fclean all

