#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		name = rhs.name;
		hitPoints = rhs.hitPoints;
		energyPoints = rhs.energyPoints;
		attackDamage = rhs.attackDamage;
	}
	return *this;
}

// Attack method
void ClapTrap::attack(const std::string& target) {
	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << "ClapTrap " << name << " cannot attack - no hit points or energy points left!" << std::endl;
		return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

// TakeDamage method
void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints == 0) {
		std::cout << "ClapTrap " << name << " is already destroyed!" << std::endl;
		return;
	}
	if (amount >= hitPoints) {
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is destroyed!" << std::endl;
	} else {
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! " << hitPoints << " hit points remaining." << std::endl;
	}
}

// BeRepaired method
void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints == 0 || energyPoints == 0) {
		std::cout << "ClapTrap " << name << " cannot be repaired - no hit points or energy points left!" << std::endl;
		return;
	}
	hitPoints += amount;
	energyPoints--;
	std::cout << "ClapTrap " << name << " is repaired for " << amount << " points! Total hit points: " << hitPoints << std::endl;
}

