#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

// Parameterized constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

// Assignment operator
FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
	}
	return *this;
}

// Special ability
void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
