#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	name = "Default_diamond";
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;      // 100 from FragTrap
	energyPoints = ScavTrap::energyPoints; // 50 from ScavTrap
	attackDamage = FragTrap::attackDamage; // 30 from FragTrap
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

// Parameterized constructor
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;      // 100 from FragTrap
	energyPoints = ScavTrap::energyPoints; // 50 from ScavTrap
	attackDamage = FragTrap::attackDamage; // 30 from FragTrap
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	this->name = src.name;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
		this->name = rhs.name;
	}
	return *this;
}

// Override attack method (use ScavTrap's version)
void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

// Special ability
void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
