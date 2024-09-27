#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie constructor called" << std::endl;
}

void Zombie::announce(void) {
	std::cout  << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}