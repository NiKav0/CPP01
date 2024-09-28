#include "Weapon.hpp"

Weapon::Weapon() : _type("Default weapon") {
	std::cout << this->_type << " is armed." << std::endl;
}

Weapon::Weapon(std::string type) : _type(type) {
	
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string Weapon::getType(void) {
	return this->_type;
}

Weapon::~Weapon() {
	std::cout << "Weapon dropped." << std::endl;
}
