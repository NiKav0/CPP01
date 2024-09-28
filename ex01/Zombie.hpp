#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void setname(std::string name);
		std::string getname(void);
	private:
		std::string _name;
};
	Zombie *zombieHorde(int N, std::string name);

#endif