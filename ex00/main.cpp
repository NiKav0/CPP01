#include "Zombie.hpp"

int main(void) {
//	===========Heap Zombie===========
	Zombie *new_one = newZombie("HZombie");
	new_one->announce();
	delete new_one;

//	===========Stack Zombie===========
	Zombie zm;
	zm.announce();
	return 0;
}