#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	// Constructors and destructor
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();

	// Assignment operator
	ClapTrap& operator=(const ClapTrap& rhs);

	// Public methods
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
