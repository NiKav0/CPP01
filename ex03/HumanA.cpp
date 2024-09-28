#include "HumanA.hpp"

// HumanA::HumanA() {
// 	std::cout << "Human A spawned." << std::endl;
// }

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weapon(type) {

}

HumanA::~HumanA() {
	std::cout << "Human A despawned." << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << "Pierced through his ennemy using his " << _weapon.getType() << std::endl;
}