#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap() {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

// Assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

// Override attack method
void ScavTrap::attack(const std::string& target) {
	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << "ScavTrap " << name << " cannot attack - no hit points or energy points left!" << std::endl;
		return;
	}

	energyPoints--;
	std::cout << "ScavTrap " << name << " powerfully attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

// Special ability
void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
