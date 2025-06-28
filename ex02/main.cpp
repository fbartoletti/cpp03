#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << std::endl << "=== Testing FragTrap ===" << std::endl;
	FragTrap frag("Fraggy");
	frag.attack("Skag");
	frag.takeDamage(15);
	frag.beRepaired(8);
	frag.highFivesGuys();

	std::cout << std::endl << "=== Testing Construction/Destruction Chaining ===" << std::endl;
	{
		std::cout << "Creating FragTrap:" << std::endl;
		FragTrap temp("Temporary");
		std::cout << "Destroying FragTrap:" << std::endl;
	}
	std::cout << std::endl << "=== Testing Different Damage Values ===" << std::endl;
	ClapTrap clap2("WeakBot");
	ScavTrap scav2("MediumBot");
	FragTrap frag2("StrongBot");
	std::cout << "ClapTrap attacks:" << std::endl;
	clap2.attack("Target");
	std::cout << "ScavTrap attacks:" << std::endl;
	scav2.attack("Target");
	std::cout << "FragTrap attacks:" << std::endl;
	frag2.attack("Target");

	return 0;
}
