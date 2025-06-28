#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	// Constructors and destructor
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& src);
	~FragTrap();

	// Assignment operator
	FragTrap& operator=(const FragTrap& rhs);
	// Special ability
	void highFivesGuys(void);
};

#endif
