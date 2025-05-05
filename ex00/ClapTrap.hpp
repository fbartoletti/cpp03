#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	// name passed as a parameter to the constructor
	std::string name;
	// private attributes
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	// Constructors and Destroyers
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
