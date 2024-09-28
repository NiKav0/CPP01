#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon(void);
		~Weapon(void);
		void setType(std::string type);
		std::string getType(void);
	private:
		std::string _type;
};

#endif