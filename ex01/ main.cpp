#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "=== Testing ClapTrap ===" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("Bandit");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << std::endl << "=== Testing ScavTrap ===" << std::endl;
	ScavTrap scav("Scavvy");
	scav.attack("Psycho");
	scav.takeDamage(10);
	scav.beRepaired(5);
	scav.guardGate();

	std::cout << std::endl << "=== Testing Construction/Destruction ===" << std::endl;
	{
		ScavTrap temp("Temporary");
	}

	return 0;
}
