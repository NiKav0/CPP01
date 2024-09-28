#include "Zombie.hpp"

Zombie::Zombie(void) : _name("SZombie")
{
	std::cout << this->_name << " just came back to life." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->_name = name;
}

void Zombie::announce(void) {
	std::cout  << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is now lifeless."<< std::endl;
}
