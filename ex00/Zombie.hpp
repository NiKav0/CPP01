#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		std::string setname(std::string name);
		void announce(void);
		Zombie* newZombie(std::string name);

	private:
		std::string _name;
};

#endif