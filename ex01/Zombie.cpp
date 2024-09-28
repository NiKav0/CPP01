#include "Zombie.hpp"

Zombie::Zombie() : _name("No name Zomie") {
	std::cout << this->_name << " is created." << std::endl;
}

void	Zombie::setname(std::string name) {
	this->_name = name;
}

std::string Zombie::getname() { 
	return this->_name;
}

Zombie::~Zombie() {
	std::cout << "Zombies ded." << std::endl;
}
