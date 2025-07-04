#include "ClapTrap.hpp"

int main() {
 	// Test parameterized constructor
	ClapTrap clap1("Clappy");
	// Test copy constructor
	ClapTrap clap2(clap1);
	// Test assignment operator
	ClapTrap clap3;
	clap3 = clap1;
	std::cout << std::endl;
	// Test attack
	clap1.attack("Enemy");
	// Test taking damage
	clap1.takeDamage(3);
	// Test repair
	clap1.beRepaired(5);
	std::cout << std::endl;
	// Test edge case: no energy
	for (int i = 0; i < 9; i++) {
		clap1.attack("Enemy");
	}
	// Should not work
	clap1.attack("Enemy");
	std::cout << std::endl;
	// Test edge case: no health
	clap2.takeDamage(15);
	// Should not work
	clap2.attack("Enemy");
	// Should not work
	clap2.beRepaired(5);

	return 0;
}
