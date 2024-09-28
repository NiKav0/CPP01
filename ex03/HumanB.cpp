#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "Human B spawned." << std::endl;
}

HumanB::~HumanB() {
	std::cout << "Human B despawned." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << this->_name << "Pierced through his ennemy using his " << _weapon->getType() << std::endl;
}
