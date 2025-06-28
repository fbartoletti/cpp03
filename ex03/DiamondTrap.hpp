#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string name;
public:
	// Constructors and destructor
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& src);
	~DiamondTrap();

	// Assignment operator
	DiamondTrap& operator=(const DiamondTrap& rhs);
	// Override attack method (use ScavTrap's version)
	void attack(const std::string& target);
	// Special ability
	void whoAmI();
};

#endif
