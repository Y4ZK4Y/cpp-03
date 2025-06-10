#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {

public:
    FragTrap();
    FragTrap(const std::string& Name); // vs. std::string Name - why? whichc one ?
    FragTrap(const FragTrap& copy);
    FragTrap& operator=(const FragTrap& copy);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
