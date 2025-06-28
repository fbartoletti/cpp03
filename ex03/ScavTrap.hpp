#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	// Constructors and destructor
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& src);
	~ScavTrap();

	// Assignment operator
	ScavTrap& operator=(const ScavTrap& rhs);
	// Override attack method
	void attack(const std::string& target);
	// Special ability
	void guardGate();
};

#endif
