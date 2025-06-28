#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	std::cout << "=== Testing DiamondTrap Construction ===" << std::endl;
	DiamondTrap diamond("Sparky");
	std::cout << std::endl << "=== Testing DiamondTrap Methods ===" << std::endl;
	diamond.attack("Enemy");
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	std::cout << std::endl << "=== Testing Special Abilities ===" << std::endl;
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();
	std::cout << std::endl << "=== Testing Attributes ===" << std::endl;
	std::cout << "Testing hit points (should be high like FragTrap):" << std::endl;
	diamond.takeDamage(50);
	std::cout << "Testing energy points (should be medium like ScavTrap):" << std::endl;
	for (int i = 0; i < 51; i++) {
		diamond.attack("Target");
	}
	std::cout << std::endl << "=== Testing Construction/Destruction Chain ===" << std::endl;
	{
		std::cout << "Creating DiamondTrap:" << std::endl;
		DiamondTrap temp("Temporary");
		std::cout << "About to destroy DiamondTrap:" << std::endl;
	}

	return 0;
}
